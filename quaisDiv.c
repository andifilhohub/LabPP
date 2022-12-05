#include <stdio.h>
int div (y,x);
int main(void){
    int n, acum=0, ref;



printf("Digite a quantiade de elementos\n");
scanf("%d",&n);
int vetor[n];
for (int i = 0; i<n; i++){

    printf("Informe o %d elemento: ", i);
    scanf("%d", vetor+i);


}
printf("digite a referencia: ");
scanf("%d", &ref);
for (int i = 0; i < n; i++)
{
    if (div(vetor[i],ref)==vetor[i]){
        printf("%d# ", vetor[i]);
    }
    else
    {
        printf("%d ", vetor[i]);
        }
}

    return 0;
}

int div (x,y){

if (y%x==0)
return x;
else
{
    return "*";
}
}