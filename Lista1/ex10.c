#include <stdio.h>

int main (){
    int a, b, c, x, y;
    printf("Calculadora da funcao f(x) = Ax^2+Bx+C\n\n");
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    printf("Digite um valor para C: ");
    scanf("%d", &c);
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    y = (a*x*x) + (b*x) + c;
    printf("O valor de f(x) para os valores inseridos eh: %d\n", y);

    return 0;
}