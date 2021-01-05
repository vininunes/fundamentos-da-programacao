#include <stdio.h>

int main (){    
    int num, d1, d2, d3, d4;
    printf("Digite um numero inteiro com 4 digitos: ");
    scanf("%d", &num);
    
    d1 = num/1000;
    d2 = (num-(d1*1000))/100;
    d3 = (num -(d1*1000+d2*100))/10;
    d4 = (num -(d1*1000+d2*100+d3*10));

    printf("%d\n%d\n%d\n%d\n", d1,d2,d3,d4);   

    return 0;
}