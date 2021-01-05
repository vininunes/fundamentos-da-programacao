#include <stdio.h>

int main (){
    int matriz[4][4], n;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &n);
            matriz[i][j] = n;
        }  
    }
    for(int i = 0; i < 4; i++){
        printf("|");
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        } 
        printf("|\n"); 
    }

    return 0;
}