#include <stdio.h>

int main (){
    int num;
    printf("Digite um numero inteito: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        printf ("%d\n", i);        
    }  

    return 0;
}