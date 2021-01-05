#include <stdio.h>

int main (){
    printf("Calculadora de impostos sobre videos games\n\n");
    float val, imp;
    printf("Digite o valor do video game: ");
    scanf("%f", &val);

    imp = val*0.4;
    
    printf("O imposto repassado ao governo eh R$%.2f\n", imp);

    return 0;
}