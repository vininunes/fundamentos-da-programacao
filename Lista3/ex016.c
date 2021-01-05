#include <stdio.h>

int main (){
    int num1;
    float div = 1, pi = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++){
        if (i%2 != 0){
            pi = pi + 4/div;
            printf("+ 4/%f ", div);
        } else {
            pi = pi - 4/div;
            printf("- 4/%f ", div);
        }      
        div = div + 2;
    }
    printf("\n%f\n", pi);
    return 0;
}