// Autor: Anderson de Souza FIlho Eng-Comp
// Matrícula: 12011ECO032
// Criado 25/11
#include <stdio.h>
#include <math.h>
int main (void){
float dist(float A1,float A2,float B1,float B2);
float A1, A2, B1, B2;
scanf("%f %f %f %f",&A1, &A2, &B1, &B2);



printf("%.3lg", dist(A1,A2,B1,B2));

    return 0;

}
float dist(float A1,float A2,float B1,float B2)
{
float resultado;

resultado = ((A1-B1)*(A1-B1))+((A2-B2)*(A2-B2));
 
return sqrt(resultado);



}