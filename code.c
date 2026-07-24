#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void erro() {
    printf("\nEntrada invalida\n");
}

float calcularAutonomia(float liters, float consumo) {
    return liters * consumo;
}

#define NUM_NIVEIS 6
const int consumo[NUM_NIVEIS] = {22, 18, 15, 13, 10, 8};
const int potencias[NUM_NIVEIS] = {20, 40, 50, 60, 80, 100};

void exibirTabelaSimulacao(float liters) {
    int i;
    printf("\n\nTabela de Simulacao (combustivel = %.2f L)\n", liters);
    printf("%-14s %-16s %-15s\n", "Potencia (%)", "Consumo (km/L)", "Autonomia (km)");
    for (i = 0; i < NUM_NIVEIS; i++) {
        float autonomia = calcularAutonomia(liters, consumo[i]);
        printf("%-14d %-16d %-15.1f\n", potencias[i], consumo[i], autonomia);
    }
}

int main() {
    const int tanque = 50;
    int alerta = 25;
    float liters, range;
    int potencia, i, controle = 0;

    while (1) {
        printf("Digite o combustivel disponivel:");
        if (scanf("%f", &liters) != 1) {// o scanf retorna 1 (verdadeiro) quando ele le um float (por conta do %f), 
                                        //assim se um float nao foi lido ele retornara um valor diferente de 1
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);//limpa o input
            erro();
            continue;
        }
        int ch;
        while ((ch = getchar()) == ' ' || ch == '\t'); //pula espacos
        if (ch != '\n' || liters < 0 || liters > tanque) { //verifica se o valor esta no intervalo ou se apos pular os espacos ha alguma letra
            if (ch != '\n') {
                while (ch != '\n' && ch != EOF) ch = getchar();
            }
            erro();
        } else {
            if (liters == 0) {
                printf("O tanque esta vazio, digite um valor maior que 0\n");
            } else {
                break;
            }
        }
    }

    while (controle == 0) {
        printf("\nDigite a potencia que sera utilizada:");
        if (scanf("%d", &potencia) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            erro();
            continue;
        }
        int ch;
        while ((ch = getchar()) == ' ' || ch == '\t');
        if (ch != '\n') {
            while (ch != '\n' && ch != EOF) ch = getchar();
            erro();
            continue;
        }
        for (i = 0; i < NUM_NIVEIS; i++) {//passa pelo vetor potencias verificando se o input corresponde com algum valor da tabela
            if (potencias[i] == potencia) {
                controle = 1;
                break;
            }
        }
        if (controle == 0) {
            printf("\nValor invalido. Digite um valor entre estes: 20, 40, 50, 60, 80, 100\n");
        }
    }

    range = calcularAutonomia(liters, consumo[i]);
    printf("\nSera usado %d %% de potencia", potencia);
    printf("\nVoce possui %.1fL", liters);
    printf("\nO seu consumo sera: %dKm/L", consumo[i]);
    printf("\nA sua autonomia e de: %.2f Km", range);
    if (range < alerta)
        printf("\nAlerta de autonomia baixa");
    exibirTabelaSimulacao(liters);

    return 0;
}


         
