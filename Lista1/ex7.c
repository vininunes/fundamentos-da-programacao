#include <stdio.h>

int main (){
    float altura, lado, area;
    printf("Calculadora da area do retangulo\n\n");
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Digite o lado do retangulo: ");
    scanf("%f", &lado);

    area = lado * altura;
    printf("A area eh igual a: %2.f\n", area);

    return 0;
}