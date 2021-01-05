#include <stdio.h>

int main (){
    float n1, n2;

    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);

    if(n1 == n2){
        printf("n1 eh igual a n2\n");
    } else if (n1 > n2){
        printf("n1 eh maior que n2\n");
    } else {
        printf("n1 eh menor que n2\n");
    }

    return 0;
}