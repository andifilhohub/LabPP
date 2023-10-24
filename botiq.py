from iqoptionapi.stable_api import IQ_Option

import time, random

email = 'andersonmengo.11@gmail.com'
senha = 'apollo321'

API = IQ_Option(email,senha)
check, reason = API.connect()

if check:
    print('conectado')
else:
    print('falha na conexão')
    print(reason)

API.change_balance('PRACTICE')
def open_ord(atv,vlr,dir,exp,typ):
    status = 0
    if typ == 'digital':
        check, id = API.buy_digital_spot_v2(atv,vlr,dir,exp)
    else:
        check, id = API.buy(vlr,atv,dir,exp)
    
    if check: 
        print('Ordem executada ', id)
        while True:
            time.sleep(0.1)
            status, result = API.check_win_digital_v2(id) if typ == 'digital' else API.check_win_v4(id)
            
            if status:
                if result>0: 
                    print('WIN', round(result,2))
                    return status
                elif result == 0:
                    print('empate', round(result,2))
                    return status
                else: 
                    print('LOSS', round(result,2))
                    
                    return not status
                break
    else:
        print('erro na abertura', reason)
def payout(par):
    profit  = API.get_all_profit()
    all_asset = API.get_all_open_time()

    try:
        if all_asset ['binary'][par]['open']:
            if profit[par]['binary']>0:
                binary = round(profit[par]['binary'],2) * 100
        else:
            binary = 0
    except:
        binary = 0
    try:
        if all_asset ['=turbo'][par]['open']:
            if profit[par]['turbo']>0:
                turbo = round(profit[par]['turbo'],2) * 100
        else:
            turbo  = 0
    except:
        binary = 0
    try:
        if all_asset ['digital'][par]['open']:
            digital = API.get_digital_payout(par)
        else:
            digital = 0
    except:
        digital = 0

    return binary, turbo, digital
def martingale(vlr,payout,niveis):
    lucro = vlr*(payout/100)
    ord = []
    loss = vlr
    for i in range(niveis-1):
        loss += loss/(payout/100)
        ord.append(round(loss,2)) 
    return ord               
def maiorpay(po):
    po = list(po)
    max_value = None
    max_idx = None

    for idx, num in enumerate(po):
        if max_value is None or num > max_value:
            max_value = num
            max_idx = idx
    
    return idx
    
    
temp = time.time()
lis = ['binario','turbo','digital']
lis2 = ['call','put']
atv = 'EURGBP'
vlr = 100.0
dir = lis2[round(random.randint(0,1))]
exp = 1
po = payout(atv)
typ = str(lis[maiorpay(po)])
po = list(po)
lucro = 0
while lucro <8000:
    time.sleep(random.randint(0,5))
    gale = martingale(vlr,po[maiorpay(po)],7)
    status = open_ord(atv,vlr,lis2[round(random.randint(0,1))],exp,typ)
    print("status é ",status)
    
    if not status:
        i = 0
        while not status:
            status = open_ord(atv,gale[i],lis2[round(random.randint(0,1))],exp,typ)
            i+=1
        lucro += vlr*(po[maiorpay(po)]/100)    
    else: 
        lucro += vlr*(po[maiorpay(po)]/100)
    print(lucro)
    
    	
#13,396.84