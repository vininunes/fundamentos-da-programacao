#include <stdio.h>
#include <math.h>

int main (){
    printf("Calculadora da hipotenusa de um triangulo retangulo\n\n");

    int cat1, cat2, hip;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%d", &cat1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%d", &cat2);

    hip = sqrt(cat1*cat1 + cat2*cat2);

    printf("A hipotenusa eh: %d\n", hip);

    return 0;
}