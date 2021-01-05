#include <stdio.h>

int main(){
    int n1, soma = 0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }        
    }

    printf("%d\n", soma);
    
    return 0;
}