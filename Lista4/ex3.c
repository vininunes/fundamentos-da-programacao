#include <stdio.h>

int main (){
    int vetor[10], n, soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);
        vetor[i] = n;
    }

    for (int i = 0; i < 10; i++){
        soma = soma + vetor[i];         
    }
    printf("A soma dos elementos do vetor eh: %d\n", soma);

    return 0;
}