#include <stdio.h>

int main() {
    int x, r;
    printf("Calculadora da funcao f(x) = 3x^2−6x+5\n\n");    
    printf("Digite um valor de X: ");
    scanf("%d", &x);
    r = (3 * x * x) - (6 * x) + 5;
    printf("O valor de f(x) eh igual: %d\n", r);

    return 0;
}