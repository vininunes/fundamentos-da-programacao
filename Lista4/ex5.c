#include <stdio.h>

int main (){
    int vetor[10], n, menor, maior;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);
        vetor[i] = n;
    }    

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){
            vetor[i] = 0;
        }       
    }
    
    printf("Vetor = {");
    for(int i = 0; i < 10; i++){
        if (i > 0){
            printf(", ");
        }
        printf("%d", vetor[i]);
    }
    printf("}\n");

    return 0;
}