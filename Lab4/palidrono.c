// Autor: Anderson Filho
// Matriula: 12011ECP032
#include <stdio.h>
#include <string.h>
#define N 1024
void getstr(char * str, int nchar);
int main(void){
    int verdadeiro = 0;
    char msg[N];
   char novamsg[N];
    printf("Entre com uma msg: ");
    getstr(msg, N);
for (int i = 0, j = 0; i < strlen(msg); i++)
{
    if (msg[i] > 64 && msg[i] < 91 || msg[i] > 96 && msg[i] < 123){
        novamsg[j] = msg[i];
        j++;
    }
    if (i == strlen(msg)-1){
        novamsg[j] = '\0';
    }
}   

upper(novamsg);

for (int i = 0; i < strlen(novamsg); i++)
{
    if (novamsg[i]!=novamsg[strlen(novamsg)-1-i]){
        verdadeiro = 1;

    }
}

if (verdadeiro == 0){

printf("Palidrono: Verdadeiro");
}
else{printf("Palidrono: Falso");}




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
void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}