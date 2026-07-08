#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50;
    float liters, range;
    while(1){
        printf("Digite o combustivel disponivel:");
        if ((scanf("%f", &liters) == 1) && (liters>0 && liters<=tanque)){
            int ch=getchar();
            if (ch == '\r')
            ch=getchar();
            if (ch == '\n'){
            break;
            }else{
                printf("\nValor invalido! Digite um valor valido.\n");
            }
        }else{
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("\nValor invalido! Digite um valor valido.\n");
        }    
    }   
    return 0;
}
