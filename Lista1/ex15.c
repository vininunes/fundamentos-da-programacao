#include <stdio.h>
#include <math.h>

int main (){
    printf("Calcular distancia entre dois pontos cartesianos\n\n");
    float x1, x2, y1, y2, dis;
    printf("Digite a coordenada x1: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y1: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x2: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y2: ");
    scanf("%f", &y2);

    dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("A distancia entre (%.0f,%.0f) e (%.0f,%.0f) eh igual a %.2f\n", x1,y1,x2,y2,dis);    

    return 0;
}