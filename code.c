#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50;
    float liters, range;
    while(1){
        scanf("%f", &liters);
        if(0<=liters || 50>=liters){
        break;
        }else{
        printf("Valor inválido, digite um valor entre 0 e 50");
        }
        
    } 
    
    
    return 0;
}