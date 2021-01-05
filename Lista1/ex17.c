#include <stdio.h>

int main(){
    float val_mar, pag_mar, val_abr, pag_abr;
    printf("Digite o valor a pagar em marco: ");
    scanf("%f", &val_mar);
    printf("Digite o valor pago em marco: ");
    scanf("%f", &pag_mar);
    printf("Digite o valor a pagar em abril: ");
    scanf("%f", &val_abr);

    pag_abr = val_abr + (val_mar-pag_mar)*1.033;

    printf("O valor total a pagar em abril é R$%.2f\n", pag_abr);


    return 0;
}