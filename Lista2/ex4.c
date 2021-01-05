#include <stdio.h>

int main (){
    float n1, n2, n3;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 && n3 >= 0 && n3 <= 10){
        printf("A media eh: %.2f\n", (n1 + n2 + n3)/3);
    } else {
        printf("Uma das notas eh invalida\n");
    }

    return 0;
}