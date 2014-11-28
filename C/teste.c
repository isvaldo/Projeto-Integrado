#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <locale.h>


int geraElementos(int elementos[], int nElementos) {
    /* Função que gera numeros aleatorios */
    srand(time(NULL));
    int i;

    for (i = 0; i < nElementos; i++) {
        elementos[i] = rand() % (500000 - 1);
    }

}

int len(int *vet){
int *vet2 =vet;
printf ("%d\n",sizeof(vet2) );
}

main () {

    int elementos[9000]; // Criar vetor
    elementos[9000] = geraElementos(elementos, 9000);
    printf("%p\n",elementos);
    printf("%d\n",elementos);
    printf("%d\n",elementos[100]);
    len(elementos);


}
