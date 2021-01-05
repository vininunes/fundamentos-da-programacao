#include <stdio.h>

int main(){
    long long int num, res = 1;
    printf("Digite um numero inteiro: ");
    scanf("%lld", &num);
    for (int i = 1; i <= num; i++){
        res = i * res;
    }
    printf("Fatorial de %lld é %lld\n", num, res);

    return 0;
}