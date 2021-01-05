#include <stdio.h>

int main (){
    int index;
    float n1, n2;

    printf("1. soma\n2. subtração\n3. multiplicação\n4. divisão\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &index);

    if (index > 4 || index < 1){
        printf("\nOpcao invalida\n");
        return 0;
    }

    printf("\nDigite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);
    
    switch (index){
        case 1:
            printf("%f + %f = %f\n", n1, n2, n1 + n2);
            break;
        case 2:
            printf("%f - %f = %f\n", n1, n2, n1 - n2);
            break;
        case 3:
            printf("%f * %f = %f\n", n1, n2, n1 * n2);
            break;
        case 4:
            printf("%f / %f = %f\n", n1, n2, n1 / n2);
            break;
    }


    return 0;
}