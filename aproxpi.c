#include <stdio.h>
#include <math.h>
double leibniz(int x);
int main(){
    int n;
printf("Digite um valor para n: ");
scanf("%d", &n);


printf("%g",leibniz(n)*4);
return 0;
}
double leibniz(int x){
    float pi = 0;
    for (int  i = 0; i < x; i++)
    {
        pi += pow(-1,i)/(2*i+1);
    }
    
return pi;
}