#include <stdio.h>

int main (){
    int num, var1 = 0, var2 = 0;
    printf("Digite quando numeros voce vai inserir: ");
    scanf ("%d", &num); 
    for (int i = 0; i < num; i++){
        scanf("%d", &var2);
        if (var2 > var1){
            var1 = var2;
        }
    }
    printf("O maior valor inserido é %d\n", var1);
    return 0;
}