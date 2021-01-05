#include <stdio.h>

int main (){
    
    float dolar, reais;
    printf("Conversor de dolareas para reais\n\n");
    printf("Digite seus valor em dolares: ");
    scanf("%f", &dolar);
    reais = dolar * 3.92;
    printf("Seu valor em reais eh R$ %.2f\n", reais);

    return 0;
}