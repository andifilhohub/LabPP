#include <stdio.h>

int main(void)
{
    int n, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
            
    
        if (n%i==0){
        printf("SIM %d\n",i);
        soma+=i;}

    }
        
    
    printf("%d", soma);    



    return 0;

}