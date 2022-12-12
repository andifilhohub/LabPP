// Autor: Anderson Filho
// Matriula: 12011ECP032

#include <stdio.h>
#include <string.h>
#define N 1024
void getstr(char * str, int nchar);
int main (void){
 char s[N];
 int soma = 0;
    printf("Escreva uma mensagem: ");
    getstr(s, N);

for (int i = 0; i < strlen(s); i++)
{
        if (s[i] == 32){
printf("%d\n", i);
            soma+=1;
        }
}

printf("%d", soma+1);



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
