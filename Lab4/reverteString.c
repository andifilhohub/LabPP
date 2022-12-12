// Autor: Anderson Filho
// Matriula: 12011ECP032
#include <stdio.h>
#include <string.h>
#define N 1024

void getstr(char * str, long long int nchar);

int main(void) {
    char msg[N] = {'x','x','x','x','x'};
   
    printf("Entre com uma msg: ");
    getstr(msg, N);

   

    for (int i = 0; i < strlen(msg); i++)
    {
        if (msg[i] == 32){
            msg[i] = ' ';


        }
        else if (msg[i]>96){
         msg[i] = (msg[i]-32);

        
        }
    }
    for (int i = 0; i < strlen(msg); i++)
    {
        if (msg[(strlen(msg)-1)-i] == 32){
            printf(" ");
        }
        else{
        printf("%c", msg[(strlen(msg)-1)-i]);
        }

        


    }
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
void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}