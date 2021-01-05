#include <stdio.h>

int main() {
    printf("Conversor de graus para radianos\n\n");
    float pi, ang, res;;
    pi = 3.14;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &ang);
    
    res = ang * (pi/180);

    printf("Seu angulo em radianos eh: %.2f\n", res);

    return 0;
}