#include <stdio.h>

int main (){
    int num1;
    float res = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num1);
    printf("H(%.0d) = 1 + ", num1);    
    for (float i = 1; i <= num1; i++){        
        printf ("1/%.0f", i);
        res = res + 1/i;        
        if (i < num1){
            printf(" + ");
        }      
    }
    printf("\nH(%d) = %.8f\n", num1, res);
    return 0;
}