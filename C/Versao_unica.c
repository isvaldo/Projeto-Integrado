/* includes*/
// SO IMPORTE O QUE È REALMENTE NECESSARIO
#include <stdio.h>
#include <limits.h>
#include <time.h>
/*funções*/

// Essa variavel é global, pois é utilizada em todos as funções do programa
int NElementos;
void pegaNumeroElementos(){
    /*Pega o numero de elementos e seta na variavel*/
    puts("Informe o numero de elementos que você quer trabalhar [0-500.000]");
    scanf(" %d",&NElementos);
    }

int geraElementos(int elementos[]) {
/* função que gera numeros aleatorios */

}
void maior(int vet[]){
    /*retorna o maior valor de uma array*/
    int i;
    int maior=INT_MIN;
    for (i=0;i<NElementos;i++){
            maior = vet[i]>maior? vet[i]:maior;
        }
    printf("Maior Numero: %d\n",maior);
}

void menor(int vet[]){
    /*retorna o menor valor de uma array*/
    int i;
    int menor=INT_MAX;
    for (i=0;i<NElementos;i++){
            menor = vet[i]<menor? vet[i]:menor;
        }
    printf("Menor Numero: %d\n",menor);
}


void soma(int vet[]){
    /*Retorna a soma de todos elementos de um vetor*/
    int i;
    int long soma=0;
    for (i=0;i<NElementos;i++) {
        soma += vet[i];
    }
    printf("Soma total: %d",soma);

}

void mostraTempo(){
    /*retorna tempo atual */
    char tempo;
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    puts(asctime (timeinfo));

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
        puts("Opção Invalida");
        break;
    }
    puts("precione qualquer tecla para continuar");
    //Trava a tela até que algo aconteça
    getchar();
}

void limparTela() {
    /*desenvolver aqui como limpar tela*/

}

/* inicio do programa */
main () {
    pegaNumeroElementos();
    int elementos[NElementos];
    elementos = geraElementos(elementos);
    limparTela();

    /*forma um loop infinito mostrando as opções*/
    int opcao;
    while(1){
    mostraMenu(); // mostra menu
    scanf("%d",&opcao);  // le uma opção
    mostraResultado(opcao,elementos); // mostra resultadi
    limparTela(); // limpa a tela e repete o processo
    }

}
