#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50;
    float liters, range;
    int pot;
    char a;
    while(1){
        printf("Digite o combustivel disponivel:");
        a = '\0';
        if ((scanf("%f%c", &liters, &a) != 2) || (a!='\n') || ((liters<0) || (liters>tanque))){
            if (a! = '\n'){
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            }
            printf("\nValor invalido! Digite um valor valido.\n");                        
        }else{
            printf("aaaaa");
            break;
        }
    }
    int i=0;
    while(i != 1){
        printf("\nDigite a potencia utilizada:");
        scanf("%d", &pot);
        switch (pot){
        case 20: 
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i = 1;
               break;
        case 40:
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i = 1;
               break;
        case 50:
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i=1;
               break;
        case 60:
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i=1;
               break;
        case 80:
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i=1;
               break;
        case 100:
               printf("O consumo e %dKm/L", c[0]);
               range = liters * c[0];
               i=1;
               break;
        default:
            printf("Valor invalido, Digite um valor entre estes: 20, 40, 50, 60, 80, 100 ");
        }  
    }
    printf("\n\nAAAAAA");    
    
    return 0;
}
