#include <stdio.h>

int main (){
    int n;
    printf("Antecessor e sucessor de um numero inteiro\n\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &n);    
    printf("O atecessor de %d eh %d e seu sucessor eh %d\n", n, n-1, n+1);

    return 0;
}