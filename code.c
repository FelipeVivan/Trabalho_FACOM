#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50; int potencias[6]={20,40,50,60,80,100};
    float liters, range;
    int pot, i, z=1;
    char a;
    while(1){
        printf("Digite o combustivel disponivel:");
        a = '\0';
        if ((scanf("%f%c", &liters, &a) != 2) || (a!='\n') || ((liters<0) || (liters>tanque))){
            if (a != '\n'){
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            }
            printf("\nValor invalido! Digite um valor valido.\n");                        
        }else{
            printf("aaaaa");
            break;
        }
    }
    while (z == 1){
        printf("\nDigite a potencia que sera utilizada:");
        if (scanf("%d", &pot) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Entrada invalida\n");
            continue;
    }

    for (i=0; i<6; i++){
        if (potencias[i]==pot){
            z=0;
            break;
        }               
    }
    if (z==1){
        printf("Valor invalido. Digite um valor entre estes: 20, 40, 50, 60, 80, 100\n");
    }

    return 0;
}
