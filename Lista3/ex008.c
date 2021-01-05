#include <stdio.h>

int main (){
    int n1, n2, res = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &n2);
    for (int i = 2; n1 + n2 != 2; i++){
        if (n1 % i == 0 && n2 % i == 0){        
            res = res * i;
            n1 = n1/i;
            n2 = n2/i;                
            printf("%d, %d divido por %d\n", n1, n2, i);    
            i = 1;                    
        } else if (n1 % i == 0){                        
            res = res * i;
            n1 = n1/i;            
            printf("%d, %d divido por %d\n", n1, n2, i);   
            i = 1;             
        } else if (n2 % i == 0){            
            res = res * i;
            n2 = n2/i;
            printf("%d, %d divido por %d\n", n1, n2, i);   
            i = 1;        
        }
    }
    printf("MMC: %d\n", res);
    return 0;
}