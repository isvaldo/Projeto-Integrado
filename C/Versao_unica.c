/* includes */
#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <locale.h>

/*funções*/

// Essa variável é global, pois é utilizada em quase todas as funções do programa
int NElementos;

void localidade(){
    /* Reconhece acentuação */
    setlocale(LC_ALL,"");
}

void pegaNumeroElementos(){
    /* So passa se for maior ou igual a 1 */
    do {
        /*Pega o numero de elementos e seta na variavel*/
        puts("Informe o numero de elementos que você quer trabalhar [0-500.000]");
        scanf(" %d",&NElementos);
        if(NElementos <= 0){
            printf("Valor Inválido\n");
            pausaLimparTela();
        }
    } while (NElementos <= 0);
}

int geraElementos(int elementos[]) {
    /* função que gera numeros aleatorios */
    srand(time(NULL));
    int i;
    for (i = 0; i < NElementos; i++){
        elementos[i] = rand() % (500000 - 1);
    }
}

void maior(int vet[]){
    /*retorna o maior valor de uma array*/
    int i;
    int maior = INT_MIN;
    // Tempo inicial
    printf("\nTempo inicial: ");
    mostraTempo();
    // Diferença em segundos
    clock_t tempo;
	tempo = clock();

    for (i = 0; i < NElementos; i++){
            maior = vet[i] > maior? vet[i]:maior;
        }

    // Tempo final
    printf("Tempo final  : ");
    mostraTempo();
    printf("Tempo total  : %4.3f segundos\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);
    printf("[Maior Numero: %d]\n\n", maior);
}

void menor(int vet[]){
    /*retorna o menor valor de uma array*/
    int i;
    int menor = INT_MAX;
    // Tempo inicial
    printf("\nTempo inicial: ");
    mostraTempo();
    // Diferença em segundos
    clock_t tempo;
	tempo = clock();

    for (i=0;i<NElementos;i++){
            menor = vet[i] < menor? vet[i]:menor;
        }

    // Tempo final
    printf("Tempo final  : ");
    mostraTempo();
    printf("Tempo total  : %4.3f segundos\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);
    printf("[Menor Numero: %d]\n\n",menor);
}

void soma(int vet[]){
    /*Retorna a soma de todos elementos de um vetor*/
    int i;
    double soma = 0;
    // Tempo inicial
    printf("\nTempo inicial: ");
    mostraTempo();
    // Diferença em segundos
    clock_t tempo;
	tempo = clock();

    for (i = 0; i < NElementos; i++) {
        soma += (int) vet[i];
    }

    // Tempo final
    printf("Tempo final  : ");
    mostraTempo();
    // Mostra diferença em segundos
    printf("Tempo total  : %4.3f segundos\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);
    printf("[Soma total  : %.0f]\n\n", soma);
}

void mostraTempo(){
    /*retorna tempo atual */
    char tempo;
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf(asctime (timeinfo));
}

void mostraMenu() {
    /*Layout do menu*/
    puts("#####################################################################");
    puts("# Escolha uma das opções                                            #");
    puts("# 1) Calcula a soma de todos os elementos gerados aleatoriamente    #");
    puts("# 2) Calcula a soma de todos e encontrar o maior valor              #");
    puts("# 3) Calcula a soma de todos e encontrar o maior valor e o menor    #");
    puts("#####################################################################\n");
}

void mostraResultado(int opcao, int vet[]){
    /* Mostra resultado na tela*/
    switch(opcao) {
    case 1:
        soma(vet);
        break;
    case 2:
        soma(vet);
        maior(vet);
        break;
    case 3:
        soma(vet);
        maior(vet);
        menor(vet);
        break;
    default:
        puts("Opção Inválida");
        break;
    }

}

void pausa() {
    /* pausa o programa */
    system("cls");
}

void pausaLimparTela() {
    /* pausa o programa e limpa a tela */
    system("\npause");
    system("cls");
}

/* inicio do programa */
main () {
    localidade();
    pegaNumeroElementos();
    int elementos[NElementos];
    elementos[NElementos] = geraElementos(elementos);
    pausa();


    /*forma um loop infinito mostrando as opções*/
    int opcao;

    while (1) {
        mostraMenu(); // mostra menu
        scanf("%d",&opcao);  // le uma opção
        mostraResultado(opcao,elementos); // mostra resultado
        pausaLimparTela(); // limpa a tela e repete o processo
    }

}
