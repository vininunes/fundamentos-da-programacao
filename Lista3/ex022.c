#include <stdio.h>

int main (){
    double num1, aX, aY, bX, bY, pX = 0, pY = 0;
    printf("Digite o numero de pontos desejados: ");
    scanf("%lf", &num1);
    printf("Digite a coordenada do ponto A (ex: x y): ");
    scanf("%lf%lf", &aX, &aY);
    printf("Digite a coordenada do ponto B (ex: x y): ");
    scanf("%lf%lf", &bX, &bY);    

    for (int i = 1; i <= num1; i++){
        if (i == 1){
            pX = aX;
            pY = aY;
            printf("A  > (%.1lf,%.1lf)\n", aX, aY);
            printf("B  > (%.1lf,%.1lf)\n", bX, bY);
        }
        pX += bX; 
        pY += bY;
        printf("P%d > (%.1lf,%.1lf)\n", i, pX, pY);
    }

    return 0;
}