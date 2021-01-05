#include <stdio.h>
#include <math.h>

int main (){
    int num1, dec = 0, pot = 0, sob;
    printf("Digite um numero binario: ");
    scanf("%d", &num1);

    while (num1 >= 1){
        sob = num1%10;
        num1 = num1/10;
        dec = dec + pow(2, pot)*sob;
        pot++;
    }
    printf("Numero decimal: %d\n", dec);
    return 0;
}