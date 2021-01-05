#include <stdio.h>

int main (){
    int vetor[10], n, menor, maior;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);
        vetor[i] = n;
    }
    menor = maior = vetor[1];

    for (int i = 0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        } 
        if (vetor[i] < menor){
            menor = vetor[i];
        }        
    }
    printf("O menor numero do vetor eh: %d\nO maior numero do vetor eh: %d\n", menor, maior);

    return 0;
}