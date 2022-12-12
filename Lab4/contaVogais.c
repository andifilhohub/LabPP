#include <stdio.h>
#include <string.h>
#define N 1024

void getstr(char * str, long long int nchar);

int main(void) {
    char msg[N] = {'x','x','x','x','x'};
    int soma = 0;
    printf("Entre com uma msg: ");
    getstr(msg, N);
    for (int i = 0; i < strlen(msg); i++)
    {
        if (msg[i]== 'A' || msg[i]== 'E' || msg[i]== 'I' || msg[i]== 'O' || msg[i]== 'U' || msg[i]== 'a' || msg[i]== 'e' || msg[i]== 'i' || msg[i]== 'o' || msg[i]== 'u' ){
                soma+=1;
        }
    }
    printf("%d", soma);
    return 0;
}

void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}