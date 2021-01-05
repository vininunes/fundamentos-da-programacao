#include <stdio.h>

int main (){
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++){
        if (n1 % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}