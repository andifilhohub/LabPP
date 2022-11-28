
// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11
#include <stdio.h>

int main(void){
int impar();
int a, b;
printf("Escolha um intervalo de valores inteiros\n");
scanf("%d %d",&a,&b);
;

if (a>=b) {
printf("O primeiro valor deve ser menor que o segundo\n");
printf("\n");
return main();
}
else{
if (impar(b) != b){
for (int i = a; i <= b; i++)
{
    if (i<(b-1) && impar(i) == i){
        printf("%d, ", i);
    }
    else if (i==(b-1) && impar(i) == i){
        printf("%d", i);
    }
}   
}
else if (impar(b) == b){
for (int i = a; i <= b; i++)
{
    if (i<b && impar(i) == i){
        printf("%d, ", i);
    }
    else if (i==b && impar(i) == i){
        printf("%d", i);
    }
}}

}




// criar um for aqui para variar o numero verificado e printar com virgula


    return 0;
}
// função para verificar numero impar
int impar(x){
if (x%2 !=0){
    return x;}
else if (x%2==0){
    return 3;
}
}