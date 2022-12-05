#include <stdio.h>
minormax(int vetor[], int numero, char op);
int main(void){
    int n, acum=0;



printf("Digite a quantiade de elementos\n");
scanf("%d",&n);
int vetor[n];
for (int i = 0; i<n; i++){

    printf("Informe o %d elemento: ", i);
    scanf("%d", vetor+i);


}
for (int i = 0; i<n; i++){
if (vetor[i] == minormax(vetor, n, '>')){
    printf("%d> ", vetor[i]);

}
else if (vetor[i] == minormax(vetor, n, '<')){
printf("%d< ", vetor[i]);
}
else{
    printf("%d ", vetor[i]);
}
{
}
{
}


}
    return 0;
}

int minormax(int vetor[], int numero, char op){
    int min = vetor[0], max = vetor[0];
    if (op == '<'){
for (int i = 0; i<numero; i++){
if (vetor[i] < min){
    min = vetor[i];
}

}

    }
    else if (op == '>'){
for (int i = 0; i<numero; i++){
if (vetor[i] > max){
    max = vetor[i];
}

}
}
if (op == '>'){
    return max;}
else
    {
return min;
    }
}




