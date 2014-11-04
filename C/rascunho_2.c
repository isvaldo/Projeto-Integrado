#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

void calculo_soma(int vet[]);//declaração ou protótipo da função

int qt_elementos, i, menu; //declaração de variáveis globais, para também poderem ser usadas na função

main(){

    // OBS trocar int para float, alterar nome de i
    // Programa com tendencias a gerar numeros aleatorios entre 4 a 5 digitos

    // Titulo
    system ("title Coletando dados de tempo de execução 1.0");

    // Cor de fundo/Cor da letra
    system ("color 0a");

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
    printf("\n\n(1) - Calcula a soma de todos os elementos gerados aleatoriamente\n");
    printf("(2) - Calcula a soma de todos os elementos gerados aleatoriamente e encontrar o maior valor\n");
    printf("(3) - Calcula a soma de todos os elementos gerados aleatoriamente, encontrar o maior valor e o menor\n");
    printf("\n\nO que deseja fazer? ");//Mudei um pouco o "desing" dessa parte
    scanf ("%d", &menu);
    printf("\n");


    decisao://é pra cá que vem o "goto" na situação de default
        switch(menu){
            case 1:
                // Soma todos os valores do vetor
                printf("Inicio as: 00:00:00\n");
                calculo_soma(n_elementos);
                printf("Fim as: 00:00:00\n");
                printf("Total de tempo: 00:00:00\n");
                break;
            case 2:
                // Soma todos os valores do vetor
                printf("Inicio as: 00:00:00\n");
                calculo_soma(n_elementos);
                printf("Fim as: 00:00:00\n");
                printf("Total de tempo: 00:00:00\n");
                break;
            case 3:
                printf("Inicio as: 00:00:00\n");
                calculo_soma(n_elementos);
                printf("Fim as: 00:00:00\n");
                printf("Total de tempo: 00:00:00\n");
                break;
            default:
                printf("\nEntre com uma opcao valida: ");
                scanf("%d", &menu);
            goto decisao;
            /*depois de pedir uma opção válida o "goto" reinicia o laço do "switch" para vereificar qual é a opção*/
        }

    /* laço padrao dos elementos - retirar no final
    for(i = 0; i < qt_elementos; i++){
        printf("%d\n", n_elementos[i]);
    }
    */

}

//Função qu eu fiz pra fazer a soma e mostrar o maior e o menor núemero
void calculo_soma(int vet[]) {
    int soma_Telementos = 0, valor_maior = INT_MIN, valor_menor = INT_MAX;

    for(i = 0; i < qt_elementos; i++) {
        soma_Telementos += vet[i];

        if(vet[i] > valor_maior) {
            valor_maior = vet[i];
        }

        if(vet[i] < valor_menor) {
            valor_menor = vet[i];
        }
    }

    printf("Soma dos elementos: %d\n", soma_Telementos);

    if (menu == 2)
        printf("O maior valor e: %d\n", valor_maior);

    if (menu == 3) {
        printf("O maior valor e: %d\n", valor_maior);
        printf("O menor valor e: %d\n", valor_menor);
    }


}

