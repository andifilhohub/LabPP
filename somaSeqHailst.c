// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11

#include <stdio.h>
int main(){
int n,result=0,i;
scanf("%d",&n);
int soma=n;
i = n;
while (i>1)
{
    if (i%2==0){
        result = i/2;
        soma+=result;
        i = result;
    }
else if(i%2!=0) {
    result = (3*i)+1;
    soma+=result;
    i = result;
}}





printf("%d", soma);
return 0;
}