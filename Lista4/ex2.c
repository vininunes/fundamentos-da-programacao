#include <stdio.h>

int main (){
    int vetor[10], n, x;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);
        vetor[i] = n;
    }

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++){
        if (vetor[i] == x){
            printf("O numero x este no vetor\n");
            return 0;
        }
    }
    printf("O numero x nao este no vetor\n");

    return 0;
}