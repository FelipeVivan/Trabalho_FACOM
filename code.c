#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void erro(){
    printf("\nEntrada invalida\n");
}
#define NUM_NIVEIS 6
float calcularAutonomia(float liters, float consumo) {
                                   // declara uma funcao chamada calcularAutonomia
                                   // ela recebe dois parametros (combustivel e consumo, ambos float)
                                   // e devolve (retorna) um valor do tipo float
    return liters * consumo;
                                   // aplica a formula Autonomia = Combustivel x Consumo
                                   // e devolve o resultado para quem chamou a funcao
} 

const int c[NUM_NIVEIS]={22,18,15,13,10,8};
const int potencias[NUM_NIVEIS]={20,40,50,60,80,100};

void exibirTabelaSimulacao(float liters) {
                                   // declara uma funcao chamada exibirTabelaSimulacao
                                   // "void" significa que ela NAO devolve nenhum valor, so imprime na tela
                                   // recebe um parametro: a quantidade de combustivel (float)
    int i;
                                   
                                   // as posicoes do vetor dentro do laco de repeticao (for)
    printf("\nTabela de Simulacao (combustivel = %.2f L)\n", liters);
                                   // imprime o titulo da tabela
                                   // %.2f mostra o valor de "combustivel" com 2 casas decimais
                                   
    printf("%-14s %-16s %-15s\n", "Potencia (%)", "Consumo (km/L)", "Autonomia (km)");
                                   // imprime o cabecalho da tabela (nomes das colunas)
                                   // %-14s significa: texto alinhado a ESQUERDA, ocupando 14 caracteres
                                   // (o "-" alinha a esquerda; sem o "-" alinharia a direita)
    for (i = 0; i < NUM_NIVEIS; i++) {
                                   // inicia um laco de repeticao (for)
                                   // i comeca em 0, repete enquanto i for menor que 6,
                                   // e soma 1 a "i" (i++) a cada volta -> percorre todo o vetor
        float autonomia = calcularAutonomia(liters, c[i]);
                                   // declara uma variavel local "autonomia"
                                   // chama a funcao calcularAutonomia, passando o combustivel (fixo)
                                   // e o consumo daquele nivel especifico (CONSUMOS[i])
        printf("%-14.0d %-16.1d %-15.1f\n", potencias[i], c[i], autonomia);
                                   // imprime uma linha da tabela com 3 valores:
                                   // POTENCIAS[i]  -> %-14.0f: numero sem casas decimais, 14 espacos, alinhado a esquerda
                                   // CONSUMOS[i]   -> %-16.1f: numero com 1 casa decimal, 16 espacos
                                   // autonomia     -> %-15.1f: numero com 1 casa decimal, 15 espacos
    }
    }                              


int main() {
    const int tanque=50; int alerta=25;
    float liters, range;
    int pot, i, z=1;
    char a;
    while(1){
        printf("Digite o combustivel disponivel:");
        a = '\0';
        if ((scanf("%f%c", &liters, &a) != 2) || (a!='\n') || ((liters<=0) || (liters>tanque))){
            if (a != '\n'){
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            }
            erro();                        
        }else{
            break;
        }
    }
    while (z == 1){
        printf("\nDigite a potencia que sera utilizada:");
        a = '\0';
        if (((scanf("%d%c", &pot, &a) != 2)) || (a!='\n')){
            if (a != '\n'){
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            }
            erro();
            continue;
        }       
        for (i=0; i<6; i++){
            if (potencias[i]==pot){
               z=0;
               break;
            }               
        }
         if (z==1){
              printf("\nValor invalido. Digite um valor entre estes: 20, 40, 50, 60, 80, 100\n");
         }
    }
    range = calcularAutonomia(liters, c[i]);
    printf ("\nVoce possui %.2fL", liters);
    printf ("\nA sua autonomia e de: %.2f Km\n", range);
    if (range < alerta)
    printf("\nAlerta de autonomia baixa\n");
    exibirTabelaSimulacao(liters);
                                   // Chama a funcao exibirTabelaSimulacao, passando o valor de combustivel
                                   // (e dentro dessa funcao que a tabela inteira e montada e impressa)
    return 0;
}

         
