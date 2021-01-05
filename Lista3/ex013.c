#include <stdio.h>

int main (){
    int num1; 
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num1); 

    for (int i = 0; i <= num1; i++){
        for (int j = 0; j <= i; j++){
            printf("*");
            if (i == j){
                printf("\n");
            }
        }
    } /* FORMA 1 */   
    /* for (int i = num1; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            printf("*");
            if (i == j){
                printf("\n");
            }
        }
    } FORMA 2 */
    /* for (int i = 0; i <= num1; i++){
        for (int j = 0; j <= i; j++){
            if (j > 0){
                printf(" ");
            }
            if (i == j){
                printf("*\n");
            }
        }
    } FORMA 3 */
    /* for (int i = num1; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            if (j > 0){
                printf(" ");
            }
            if (i == j){
                printf("*\n");
            }
        }
    } FORMA 4 */
    return 0;    
}