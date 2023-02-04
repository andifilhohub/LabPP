#include <stdio.h>
int divisor_comum(int x, int y);
int main(Void){
    int num1, num2;
printf("Digite dois numeros: ");
scanf("%d %d", &num1, &num2);
printf("%d", divisor_comum(num1,num2));
    return 0;
}
int divisor_comum(int x, int y){
int resultado = 0;
for (int i = 1; i < x || i < y; i++)
{
    if (x%i==0 && y%i == 0 && i>resultado){
        if (x!=i && y!=i){
        resultado = i;}
    }
}
return resultado;

}