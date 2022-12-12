// Autor: Anderson Filho
// Matriula: 12011ECP032
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 1024
void getstr(char * str, int nchar);
long long int tam(long long int x);
 int decimal(long long int x, long int tam);
int binario(long long int x);
int main(void){


    long long int soma = 0;
     char msg[N];
   
    printf("Entre com uma msg: ");
    getstr(msg, N);

//10100
        for (int i = 0; i < strlen(msg); i++)
        {   
            if (msg[strlen(msg)-1-i] == 49){
                soma+=(1*pow(2,i));
            }
            else {
                soma+=(0*pow(2,i));;
            }

            
            //soma += msg[i];
            
        }
        

printf("%llu\n",  soma);




    return 0;

}

int binario(long long int x){

    if (x == 0){
        printf("");
    }
    else 
    {
        binario(x/2);
        printf("%d", x%2);
    }

    
}
long long int tam(long long int x){
   long long int  b = 0;
    while (x>0){
        x/=10;
        b+=1;
    }
return b;
}
 int decimal(long long int x,long int tam){
   long long int soma = 0;
 for (int i = 0; i < tam; i++)
 {
    soma += pow(2,i)*(x%10);
    x=x/10;


 }
 
    
return soma;



}
void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}