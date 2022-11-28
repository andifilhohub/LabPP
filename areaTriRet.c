// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11
#include <stdio.h>
#include <math.h>
int main (void){

float dist(float A1,float A2,float B1,float B2);
float A1, A2, B1, B2, C1, C2,base,altura, resultado;
scanf("%f %f %f %f",&A1, &A2, &B1, &B2);

C1 = A1;
C2 = B2;


 base = dist(A1,A2,C1,C2);
 altura = dist(C1,C2,B1,B2);
resultado = (base*altura)/2;
printf("%.4lg", resultado);
    return 0;

}
float dist(float A1,float A2,float B1,float B2)
{
float resultado;

resultado = ((A1-B1)*(A1-B1))+((A2-B2)*(A2-B2));
 
return sqrt(resultado);



}