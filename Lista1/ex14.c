#include <stdio.h>
#include <math.h>

int main (){
    printf("Calcular a distancia de um ponto cartesiano ate a origem\n\n");
    float x1, y1, dis;
    printf("Digite a coordenada x: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y: ");
    scanf("%f", &y1);

    dis = sqrt(x1*x1 + y1*y1);

    printf("A distancia entre (%.0f,%.0f) e (0,0) eh igual a %.2f\n", x1,y1,dis);  

    return 0;
}