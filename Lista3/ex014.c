#include <stdio.h>

int main(){
    int num1, floyd = 1;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num1);
    for (int i = 0; i < num1; i++){
        for (int j = 0; j <= i;j++){
            printf("%d ", floyd);
            floyd++;
            if (j == i){
                printf("\n");
            }            
        }
    }
    return 0;
}