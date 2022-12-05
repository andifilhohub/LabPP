#include <stdio.h>
int qnt_negativo(int v[],int tam);
int main(void){
    int n, acum=0, ref;



printf("Digite a quantiade de elementos\n");
scanf("%d",&n);
int vetor[n];
for (int i = 0; i<n; i++){

    printf("Informe o %d elemento: ", i);
    scanf("%d", vetor+i);

}


if (qnt_negativo(vetor,n)==0)
{
    printf("vazio");
    return 0;
    }

else
{
    for (int i = 0, j=0; i < n; i++)
{
    if (vetor[i]>0 && i != (n-1))
    {
        printf("%d, ", vetor[i]);
        
    }
    else if (vetor[i]>0 && i == (n-1)){
        printf("%d", vetor[i]);
    }
}


return 0;
}}
int qnt_negativo(int v[],int tam){

int acum = 0;

for (int i = 0; i < tam; i++)
{
    if (v[i]>0)
    {
        acum+=1;
    }
    
    
}

return acum;



}