#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50;
    float liters, range;
    char a;
    while(1){
        printf("Digite o combustivel disponivel:");
        if ((scanf("%f%c", &liters, &a) != 2) || (a!='\n') || ((liters<=0) || (liters>tanque))){
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("\nValor invalido! Digite um valor valido.\n");            
            
        }else{
            printf("aaaaa");
            break;
        }
    }    
    
    return 0;
}
