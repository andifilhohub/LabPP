// Autor: Anderson Filho
// Matriula: 12011ECP032
#include <stdio.h>
#include <string.h>
#define N 1024
void getstr(char * str, int nchar);
int main (void){

char s[N];
    printf("Escreva uma mensagem: ");
    getstr(s, N);

    int letras = 0, digitos = 0, outros = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] > 64 && s[i] < 91 || s[i] > 96 && s[i] < 123)){

            letras+=1;


        }
        else if (s[i]>47 && s[i] < 58){
            digitos+=1;

        }
        else{

            outros+=1;
        }
    }
    

printf("letras: %d digitos: %d outros: %d", letras, digitos, outros);







    return 0;
}
void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}