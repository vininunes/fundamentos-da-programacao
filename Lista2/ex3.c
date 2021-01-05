#include <stdio.h>

int main (){
    int n1, n2;

    printf("Digite n1 inteiro: ");
    scanf("%d", &n1);
    printf("Digite n2 inteiro: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0){
        printf("n1 eh multiplo de n2\n");  
    } else {
        printf("n1 nao eh multiplo de n2\n"); 
    }

    return 0;
}