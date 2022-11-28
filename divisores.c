// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11
#include <stdio.h>
int main(void){

int n;
printf("Digite um valor postivo\n");

scanf("%d", &n);
for (int i = 1; i <=n; i++)
{
    if (i<n && n%i==0){
        printf("%d, ", i);
    }
    else if (i==n && n%i==0){
        printf("%d", i);
    }
}



    return 0;

}