/* includes */
#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

/*constante global usada no programa todo*/
int const N = 500000;

/* Funções */

void setIdioma() {
    /* Reconhece acentuação */
    setlocale(LC_ALL,"");
}


int pegaNumeroElementos() {
    int numero_elementos;

    /* So passa se for maior que 0 e menor ou igual a 500000 */
    do {
        /*Pega o numero de elementos e seta na variavel*/
        printf("Informe o numero de elementos que você quer trabalhar [1 - 500.000]\nN =  ");
        scanf("%d", &numero_elementos);

        if(numero_elementos <= 0 || numero_elementos > N) {
            printf("\nValor Inválido\n");
            pausa();
            limparTela();
        }

    } while (numero_elementos <= 0 || numero_elementos > N);

    return numero_elementos;
}


int * geraElementos(int elementos[], int nElementos) {
    srand(time(NULL));
    int i;

    for (i = 0; i < nElementos; i++) {
        elementos[i] = ((rand() << 15) | rand()) % N;
    }

    return elementos;
}

void maior(int vet[], int Nelementos) {
    /* Retorna o maior valor de uma array */
    int i;
    int maior = INT_MIN;

    for (i = 0; i < Nelementos; i++) {
        maior = vet[i] > maior? vet[i]:maior;
    }

    printf("[Maior Numero: %d]\n\n", maior);
}


void menor(int vet[], int Nelementos) {
    /* Retorna o menor valor de uma array */
    int i;
    int menor = INT_MAX;

    for (i = 0; i < Nelementos; i++) {
        menor = vet[i] < menor? vet[i]:menor;
    }

    printf("[Menor Numero: %d]\n\n",menor);
}


void soma(int vet[], int Nelementos) {
    /* Retorna a soma de todos elementos de um vetor */
    int i;
    double soma = 0;

    for (i = 0; i < Nelementos; i++) {
        soma += (double) vet[i];
    }

    printf("\n[Soma total  : %.0f]\n\n", soma);
}


void mostraMenu() {
    /* Layout do menu */
    puts("#####################################################################");
    puts("# Escolha uma das opções                                            #");
    puts("# 1) Calcular a soma de todos os elementos gerados aleatoriamente   #");
    puts("# 2) Calcular a soma de todos e encontrar o maior valor             #");
    puts("# 3) Calcular a soma de todos e encontrar o maior valor e o menor   #");
    puts("# 4) Fechar o programa                                              #");
    puts("#####################################################################\n");
}


void mostraResultado(int opcao, int vet[], int Nelementos) {
    clock_t t1, t2;

    t1 = clock();

    /* Mostra resultado na tela */
    switch(opcao) {
    case 1:
        soma(vet, Nelementos);
        break;
    case 2:
        soma(vet, Nelementos);
        maior(vet, Nelementos);
        break;
    case 3:
        soma(vet, Nelementos);
        maior(vet, Nelementos);
        menor(vet, Nelementos);
        break;
    case 4:
        exit(EXIT_SUCCESS);
        break;
    default:
        puts("Opção Inválida");
        break;
    }

    if(opcao >= 1 && opcao <= 3){
        t2 = clock();

        float diff = (((float)t2 - (float)t1) / 1000000.0F ) * 1000;
        printf("[Tempo de execução: %f]\n\n",diff);
    }

}


void pausa() {
    /* Pausa o programa */
    system("\npause");
}


void limparTela() {
    /* Limpa a tela */
    system("cls");
}

/* Inicio do programa */
main () {
    int NElementos;

    setIdioma();

    NElementos = pegaNumeroElementos();

    int elementos[NElementos];

    elementos[NElementos] = geraElementos(elementos, NElementos);

    limparTela();

    /* Forma um loop infinito mostrando as opções */
    int opcao;

    while (1) {
        mostraMenu(); // mostra menu
        scanf(" %d",&opcao);  // le uma opção
        mostraResultado(opcao, elementos, NElementos); // mostra resultado
        pausa();
        limparTela();//limpa a tela e repete o processo
    }

}
