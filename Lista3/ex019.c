#include <stdio.h>

int main(){
    //char cord;
    int x1, y1;
    printf("Coordenada inicial (x,y): ");
    getchar();
    scanf("%d", &x1);
    getchar();
    scanf("%d", &y1);
    getchar();
    printf("Posicoes possiveis: ");
    
    for (int i = 1; i <= 8; i++){
        if (i != y1){
        printf("(%d,%d),", x1, i);      
        }
        /*if (i != x1){
            printf("(%d,%d),", i, y1);
        }*/
    }
    for (int j = 1; j <= 8; j++){
        if (j != x1){
            printf("(%d,%d)", j, y1);
            if (j < 8){
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;          
}