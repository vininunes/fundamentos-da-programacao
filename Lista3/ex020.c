#include <stdio.h>

int main (){
    int altura, res = 0;
    printf("Digite a altura: ");
    scanf("%d", &altura);
    for (int i = 1; i <= altura; i++){
        res += (i*i);
    }
    printf("Numero de blocos na piramide: %d\n", res);
    return 0;
}