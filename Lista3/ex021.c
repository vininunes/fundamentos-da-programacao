#include <stdio.h>

int main (){
    double num1, x_max, x_min, y_max, y_min, x1, y1;
    printf("Digite quantas coordenadas serao inseridas: ");
    scanf("%lf", &num1);
    for (int i = 1; i <= num1; i++){
        printf("\n%d > Digite a coordenada (ex: x y): ", i);        
        scanf("%lf", &x1);        
        scanf("%lf", &y1);        
        if (i == 1){
            x_max = x1;
            x_min = x1;
            y_max = y1;
            y_min = y1;
        }
        if (x1 > x_max){
            x_max = x1;
        }
        if (x1 < x_min){
            x_min = x1;
        }
        if (y1 > y_max){
            y_max = y1;
        }
        if (y1 < y_min){
            y_min = y1;
        }      
    }
    printf("\nPonto maximo: (%.1f,%.1lf)\nPonto minimo: (%.1lf,%.1lf)\n", x_max, y_max, x_min, y_min);
    return 0;
}