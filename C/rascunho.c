#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

main(){

    // OBS trocar int para float, alterar nome de i
    // Programa com tendencias a gerar numeros aleatorios entre 4 a 5 digitos

    // Titulo
    system ("title Coletando dados de tempo de execução 1.0");

    // Cor de fundo/Cor da letra
    system ("color 0a");

    // Variáveis
    int qt_elementos, i, menu, soma_Telementos = 0, valor_maior = 0, valor_menor = INT_MAX;

    // Solicita quantidade de elementos(vetor)
    printf("Numero de elementos (maximo de 500.000): ");
    scanf("%d", &qt_elementos);
    printf("\n");

    // Salva a quantidade de variaves(indice) que o usuario escolheu
    int n_elementos[qt_elementos];

    // Pega tempo da maquina usado como valor inicial (semente).
    srand(time(NULL));

    // Armazena numero aleatorio de 0 a 500000(quinhentos mil), gerado por uma seguencia do tempo atual da maquina e armazena no vetor.
    for(i = 0; i < qt_elementos; i++){
        n_elementos[i] = rand() % (500000 - 1);
        printf("%d ", n_elementos[i]);
    }

    // Menu
    printf("\n\n O que deseja fazer?\n");
    printf(" (1) - Calcula a soma de todos os elementos gerados aleatoriamente\n");
    printf(" (2) - Calcula a soma de todos os elementos gerados aleatoriamente e encontrar o maior valor\n");
    printf(" (3) - Calcula a soma de todos os elementos gerados aleatoriamente, encontrar o maior valor e o menor\n");
    scanf ("%d", &menu);
    printf("\n");

    switch(menu){
        case 1:
            // Soma todos os valores do vetor
            printf("Inicio as: 00:00:00\n");
            for(i = 0; i < qt_elementos; i++){
                soma_Telementos += n_elementos[i];
            }
            printf("Soma dos elementos: %d\n", soma_Telementos);
            printf("Fim as: 00:00:00\n");
            printf("Total de tempo: 00:00:00\n");
            break;
        case 2:
            // Soma todos os valores do vetor
            printf("Inicio as: 00:00:00\n");
            for(i = 0; i < qt_elementos; i++){
                // Verificar maior valor
                if(n_elementos[i] > valor_maior){
                    valor_maior = n_elementos[i];
                }
                soma_Telementos += n_elementos[i];
            }
            printf("Soma dos elementos: %d\n", soma_Telementos);
            printf("O maior valor e: %d\n", valor_maior);
            printf("Fim as: 00:00:00\n");
            printf("Total de tempo: 00:00:00\n");
            break;
        case 3:
            // Soma todos os valores do vetor
            printf("Inicio as: 00:00:00\n");
            for(i = 0; i < qt_elementos; i++){
                // Verificar maior valor
                if(n_elementos[i] > valor_maior){
                    valor_maior = n_elementos[i];
                }
                // Verifica menor valor
                if(n_elementos[i] < valor_menor){
                    valor_menor = n_elementos[i];
                }
                soma_Telementos += n_elementos[i];
            }
            printf("Soma dos elementos: %d\n", soma_Telementos);
            printf("O maior valor e: %d\n", valor_maior);
            printf("O menor valor e: %d\n", valor_menor);
            printf("Fim as: 00:00:00\n");
            printf("Total de tempo: 00:00:00\n");
            break;
        default:
            break;
    }

    /* laço padrao dos elementos - retirar no final
    for(i = 0; i < qt_elementos; i++){
        printf("%d\n", n_elementos[i]);
    }
    */

}
