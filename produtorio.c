#include <stdio.h>
int div (y,x);
int main(void){
    int n;
    float acum = 1;



printf("Digite a quantiade de elementos\n");
scanf("%d",&n);
float vetor[n];
for (int i = 0; i<n; i++){

    printf("Informe o %d elemento: ", i);
    scanf("%f", vetor+i);
    }



for (int i = 0; i < n; i++)
{
    if (i==(n-1))
    {
        printf("%g ", vetor[i]);
        acum*=vetor[i];
    }
    else
    {
        printf("%g * ", vetor[i]);
        acum*=vetor[i];
    }
}


printf("= %g", acum);



    return 0;
}