#include <stdio.h>

int main(){
    printf("Calculadora de valores do cilindro\n\n");
    float r, h, pi, arC, vol, compCic;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("Digite o valor do altura: ");
    scanf("%f", &h);

    pi = 3.14;

    compCic = 2*pi*r;
    arC = pi*r*r;
    vol = arC*h;

    printf("Comprimento da cincunferencia: %.2f\n", compCic);
    printf("Area da circunferencia: %.2f\n", arC);
    printf("Volume cilindro: %.2f\n", vol);

    return 0;
}