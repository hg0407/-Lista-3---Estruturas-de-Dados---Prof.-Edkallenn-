#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** Função : BubbleSort
** Autor : HYGOR ALVES
** Data : 03/06/2024
** Observações: Esta função ordena os elementos de um vetor usando o algoritmo BubbleSort e conta o número de comparações e trocas realizadas.
*/

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int vetor[], int tamanho, int *comparacoes, int *trocas) {
    int i, j;
    for (i = 0; i < tamanho - 1; i++) {
        
        int trocou = 0;
        for (j = 0; j < tamanho - i - 1; j++) {
            (*comparacoes)++; 
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
                (*trocas)++; 
                trocou = 1;
            }
        }
        
        if (!trocou) {
            break;
        }
    }
}

int main() {
    srand(time(NULL)); 
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
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

    int comparacoes = 0;
    int trocas = 0;
    bubbleSort(vetor, tamanho, &comparacoes, &trocas);

    printf("Vetor ordenado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Numero de trocas: %d\n", trocas);

    return 0;
}
