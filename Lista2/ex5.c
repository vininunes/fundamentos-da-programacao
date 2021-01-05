#include <stdio.h>

int main (){
    float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 && n3 >= 0 && n3 <= 10){
        media = (n1 + n2 + n3)/3;
        //printf("A media eh: %.2f\n", media);
        if (media >= 7){
            printf("Aprovado\n");   
        } else if (media < 4) {
            printf("Reprovado\n");   
        } else {
            printf("Recuperacao\n");  
        }
    } else {
        printf("Uma das notas eh invalida\n");
    }

    return 0;
}