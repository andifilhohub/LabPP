#include <stdio.h>

int main(void)
{

    int n, r = 0, a = 0;
    printf("Digite um numero: ");
    scanf("%d",&n);
if (n == 0){
            printf("");}
        else if (n == 1){
                printf("0, ");}
        else if (n == 2){
            printf("0, 1, ");

        }
    for (int i = 0, j = 1; i < n-2 ;i++){
        

        
        
        if (i == 0){
            r = i + j;
        printf("%d, %d, %d, ", i, j, r);}
        else if (i == 1){
        r += j;
        printf("%d, ", r);}
        else {
            a = r;
        printf("%d, ", j+a );

r = r + j;
j = a;
        }

    }
    




    return 0;
}