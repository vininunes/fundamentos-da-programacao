#include <stdio.h>
#define TAM 5

int main (){
    int matriz[TAM][TAM], n, diagonalPri = 0, diagonalSec = 0, abaixoDiag = 0, acimaDiag = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &n);
            matriz[i][j] = n;
        }  
    }
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if (i == j){
                diagonalPri += matriz[i][j];
            } 
            if (i - j < 0){
                abaixoDiag += matriz[i][j];
            } 
            if (i - j > 0){
                acimaDiag += matriz[i][j];
            } 
            if (j == TAM - 1 - i){
                diagonalSec += matriz[i][j];
            }             
        }  
    }
    printf("\n");
    for(int i = 0; i < TAM; i++){
        printf("|");
        for(int j = 0; j < TAM; j++){
            printf(" %d ", matriz[i][j]);
        } 
        printf("|\n"); 
    }

    printf("\nSoma diagonal principal: %d\n", diagonalPri);
    printf("Soma acima da diagonal principal: %d\n", acimaDiag);
    printf("Soma abaixo da diagonal principal: %d\n", abaixoDiag);
    printf("Soma diagonal secundaria: %d\n", diagonalSec);

    return 0;
}