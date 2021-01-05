#include <stdio.h>

int main (){
    int n1, n2, res = 1;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n1);
    printf("Digte outro inteiro positivo: ");
    scanf("%d", &n2);

    for (int i = 1; i <= n1 || i <= n2; i++){
        if (n1 % i == 0 && n2 % i == 0){         
            if (i > res){
                res = i;
            }
        }
    }
    printf("MDC: %d\n", res);
    return 0;
}