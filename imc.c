#include <stdio.h>

int main(void){
    int a;
    float b;
    float r;
    char n;
    printf("Digite o seu peso: ");
    scanf("%d",&a);
    printf("Digite a sua altura: ");
    scanf("%f",&b);

    b = b*b;
    r = a/b;
    printf("%.2f ",r);
    if (r<16)
    {
        n = printf("(Peso normal)");
    }
    else if (r>=16 && r<17)
    {
        n = printf("(Muito abaixo do peso)");
    }
    
    else if (r>=17 && r<18.5)
    {
        n = printf("(Abaixo do peso)");
    }
    
    else if (r>=18.5 && r<25)
     {   n = printf("(Peso normal)");
     }
    
else if (r>=25 && r<30)
      {  n = printf("(acima do peso)");
      }
    
else if (r>=30 &&r<35)
       { n = printf("(Obesidade grau I)");
       }
    

    else if (r>=35 &&r<40)
        { n = printf("(Obesidade grau II)");
        }
    
    else if (r>40) 
    {
        n = printf("(Obesidade grau III)");
    }
 








    return 0;
}