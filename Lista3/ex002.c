#include <stdio.h>

int main (){
    int num, res;
    printf("Digite um numero inteiro entre de 1 a 9: ");
    scanf("%d", &num);
    if (num >= 1 && num <=9){
        for (int i = 1; i <= 10; i++){
            res = num * i;
            printf("%d * %d = %d\n", num, i, res);
        }        
    }
    
    return 0;
}