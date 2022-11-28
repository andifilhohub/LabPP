// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11
#include <stdio.h>
int main(){
int primo(n);int menor, maior;int soma = 0;printf("escolha um intervalo de numeros\n");scanf("%d %d",&menor, &maior);
for (int i = menor; i <= maior; i++){
   if (primo(i) == i)
    soma+= i; 
}
printf("%d", soma);
return 0;
}
int primo(x){
    int result = 001;
if (x==1){
    return 0;
}
if (x != 2){
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            result = 002;
        }
    }
}
    else if (x==2){
        return 2;
    }
if (result == 001){
    return x;
}
else{
 return 0;
}
}