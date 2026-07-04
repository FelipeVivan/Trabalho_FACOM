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
            break;
        }else{
            setbuf(stdin,NULL);
            printf("\nValor invalido! Digite um valor valido.\n");
        }    
    }   
    return 0;
}
