// Autor: Anderson Filho
// Matriula: 12011ECP032
#include <stdio.h>

int main(void){


    long long int n;
    printf("Digite um valor decimal: ");
    scanf("%llu", &n);


    binario(n);






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