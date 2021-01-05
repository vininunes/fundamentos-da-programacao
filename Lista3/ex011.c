#include <stdio.h>

int main(){
    int valor, razao, quantidade;
    printf("Digite o valor inicial da PA: ");
    scanf("%d", &valor);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &quantidade);
    for (int i = 1; i <= quantidade; i++){
        printf("%d", valor);
        valor = valor + razao;  
        if (i < quantidade){
            printf(", ");
        } else {
            printf(".\n");
        }
    }
    return 0;
}