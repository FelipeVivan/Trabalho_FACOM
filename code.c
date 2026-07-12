#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void erro(){
    printf("\nEntrada invalida\n");
}
void Tabela()



int main() {
    const int c[6]={22,18,15,13,10,8}, tanque=50; int potencias[6]={20,40,50,60,80,100}; int alerta=25;
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
        if (((scanf("%f%c", &pot, &a) != 2)) || (a!='\n')){
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
    range = c[i] * liters;
    printf("Voce possui %.2fL", liters);
    printf("\nA sua autonomia e de: %.2f Km", range);
    if (range < alerta)
    printf("\nAlerta de autonomia baixa ");
         
#define NUM_NIVEIS 6               
                                   

const float POTENCIAS[NUM_NIVEIS] = {20, 40, 50, 60, 80, 100};
                                   // detor (array) constante com os 6 valores de potencia (%)
                                   // POTENCIAS[0] = 20, POTENCIAS[1] = 40, ... POTENCIAS[5] = 100

const float CONSUMOS[NUM_NIVEIS]  = {22, 18, 15, 13, 10,  8};
                                   // vetor constante com o consumo medio (km/L) correspondente
                                   // a CADA posicao do vetor POTENCIAS (sao vetores "paralelos":
                                   // CONSUMOS[0] = 22 e o consumo de POTENCIAS[0] = 20%, e assim por diante)

float calcularAutonomia(float combustivel, float consumo) {
                                   // declara uma funcao chamada calcularAutonomia
                                   // ela recebe dois parametros (combustivel e consumo, ambos float)
                                   // e devolve (retorna) um valor do tipo float
    return combustivel * consumo;
                                   // aplica a formula Autonomia = Combustivel x Consumo
                                   // e devolve o resultado para quem chamou a funcao
}                               

void exibirTabelaSimulacao(float combustivel) {
                                   // declara uma funcao chamada exibirTabelaSimulacao
                                   // "void" significa que ela NAO devolve nenhum valor, so imprime na tela
                                   // recebe um parametro: a quantidade de combustivel (float)
    int i;
                                   
                                   // as posicoes do vetor dentro do laco de repeticao (for)
    printf("Tabela de Simulacao (combustivel = %.2f L)\n", combustivel);
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
        float autonomia = calcularAutonomia(combustivel, CONSUMOS[i]);
                                   // declara uma variavel local "autonomia"
                                   // chama a funcao calcularAutonomia, passando o combustivel (fixo)
                                   // e o consumo daquele nivel especifico (CONSUMOS[i])
        printf("%-14.0f %-16.1f %-15.1f\n", POTENCIAS[i], CONSUMOS[i], autonomia);
                                   // imprime uma linha da tabela com 3 valores:
                                   // POTENCIAS[i]  -> %-14.0f: numero sem casas decimais, 14 espacos, alinhado a esquerda
                                   // CONSUMOS[i]   -> %-16.1f: numero com 1 casa decimal, 16 espacos
                                   // autonomia     -> %-15.1f: numero com 1 casa decimal, 15 espacos
    }                              // fim do laco for: volta para testar "i < NUM_NIVEIS" de novo
}                                  

int main(void) {
                                   
                                   // "int" indica que ela devolve um numero inteiro no final (0 = sucesso)
                                   // "void" entre parenteses indica que main() nao recebe parametros
    float combustivel = 27.5;
                                   
    exibirTabelaSimulacao(combustivel);
                                   // Chama a funcao exibirTabelaSimulacao, passando o valor de combustivel
                                   // (e dentro dessa funcao que a tabela inteira e montada e impressa)

    
    return 0;
}
