#include <stdio.h>

int main (){
    int num, d1, d2, d3;
    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &num);

    d1 = num/100;
    d2 = (num-(d1*100))/10;
    d3 = (num-(d1*100+d2*10));

    printf("%d%d%d\n", d3, d2, d1);

    return 0;
}