#include <stdio.h>

int main (void)
{   int num1;
    int num2;
    int soma, div, sub, mult, mod;
    

    printf("Escolha dois numeros\n");
    scanf("%d %d",&num1, &num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1*num2;
    mod = num1%num2;
    div = num1/num2;
    printf("%d+%d = %d, ",num1, num2, soma);
    printf("%d-%d = %d, ",num1, num2, sub);
    printf("%d*%d = %d, ",num1, num2, mult);
    printf("%d/%d = %d, ",num1, num2,div);
    printf("%d%%%d = %d ",num1, num2, mod);
    




    return 0;
}