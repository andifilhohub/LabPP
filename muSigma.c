#include <stdio.h>
#include<math.h>


float media(float v[],int tam);
float desvio(float v[], int tam, float medi);

int main(void){
    int n;
    



printf("Digite a quantiade de elementos\n");
scanf("%d",&n);
float vetor[n], mda = 0;
for (int i = 0; i<n; i++){

    printf("Informe o %d elemento: ", i);
    scanf("%f", vetor+i);
    }
mda = media(vetor, n);
printf("media %g, desvio %g", media(vetor, n), desvio(vetor, n, mda));



return 0;
}
float media(float v[],int tam){
float acum=0;
for (int i = 0; i < tam; i++)
{
    acum+=v[i];
}

return acum/tam;
}
float desvio(float v[], int tam, float medi){
float acum=0.0;
for (int i = 0; i < tam; i++)
{
    acum+=(pow((v[i]-medi),2));

}

acum = sqrt(acum/tam);
return acum;


}
