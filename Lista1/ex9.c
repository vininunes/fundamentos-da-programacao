#include <stdio.h>
#include <math.h>
 
int main() {
     
    int a, b, c, x1, x2;
    float delta;    
    printf("Algoritimo para resolucao de Equacoes do segundo grau\n\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
 
    delta = pow(b, 2) - 4*a*c;
    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);
 
    printf("O valor de delta é: %.0f\n", delta);
    if (delta < 0) {
    printf("Seu delta eh negativo, portanto nao possui x1 ou x2.");
    } else {
    printf("O valor de x1 eh: %d\n", x1);
    printf("O valor de x2 eh: %d\n", x2);
    }
   
    return 0;
}