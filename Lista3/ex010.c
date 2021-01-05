#include <stdio.h>

int main (){
    int n1, res = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);

    for (int i = 2; i <= n1; i++){
        if (n1 % i == 0){
            res++;
        }
    }
    if (res > 2){
        printf("Nao eh um numero primo\n");        
    } else {
        printf("Eh um numero primo\n");
    }
    return 0;
}