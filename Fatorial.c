#include <stdio.h>

int main(void){
    int n;
    int r;
    
    
    printf("Digite um numero > 1\n");
    scanf("%d", &n);
    if (n>1)
    {
        r = 1;
        for ( int i = 1; i < n; i++)
        {
            r *= i+1;

        }
        
    }
    
        printf("%d! = %d\n",n,r);



    return 0;
}