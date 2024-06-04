#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** Função : Classificação por seleção
** Autor : HYGOR ALVES
** Data : 03/06/2024
** Observações: Esta função classifica os elementos de um vetor em ordem crescente usando o algoritmo de classificação por seleção.
*/

void selectionSort(int vetor[], int tamanho) {
    int i, j, min, temp;
    for (i = 0; i < tamanho - 1; i++) {
        min = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = temp;
    }
}

int main() {
    srand(time(NULL)); 
    int tamanho = 10; 
    int vetor[tamanho]; 
    int i;

    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    selectionSort(vetor, tamanho);

    printf("Vetor classificado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
