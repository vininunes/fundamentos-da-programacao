#include <stdio.h>

int main (){
    int n1;

    printf("Digite n1 inteiro: ");
    scanf("%d", &n1);
    
    if (n1 % 2 == 0){
        printf("n1 eh par\n");
    } else {
        printf("n1 eh impar\n");
    }

    return 0;
}