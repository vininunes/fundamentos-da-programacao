#include <stdio.h>

int main (){
    int ant1 = 1, ant2 = 1, phi, num1;    
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++){
        if(i > 2){
            phi = ant1 + ant2;
            ant2 = ant1;
            ant1 = phi;
            printf("%d", phi);
        } else {
            printf("1");            
        }
        if (num1 != i){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}