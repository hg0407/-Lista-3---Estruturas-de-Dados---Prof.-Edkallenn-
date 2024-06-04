#include <stdio.h>

/*
** Função : Quicksort
** Autor : HYGOR ALVES
** Data : 03/06/2024
** Observações: Esta função classifica os elementos de um vetor em ordem crescente usando o algoritmo Quicksort.
*/

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int vetor[], int inicio, int fim) {
    int pivô = vetor[fim];
    int i = (inicio - 1);
    int j;
    for (j = inicio; j <= fim - 1; j++) {
        if (vetor[j] < pivô) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}

void quicksort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(vetor, inicio, fim);
        quicksort(vetor, inicio, pi - 1);
        quicksort(vetor, pi + 1, fim);
    }
}

int main() {
    int vetor[] = {10, 7, 8, 9, 1, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int i;

    printf("Vetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    quicksort(vetor, 0, tamanho - 1);

    printf("Vetor ordenado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
