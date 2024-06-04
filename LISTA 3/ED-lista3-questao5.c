#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) return 0; 
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}
void conjecturaGoldbach(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (ehPrimo(i) && ehPrimo(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
        }
    }
}
int main() {
    int N;
    printf("Digite um numero N para verificar a Conjectura de Goldbach para todos os numeros pares entre 2 e N: ");
    scanf("%d", &N);
    

    int i;
    for (i = 2; i <= N; i += 2) {
        printf("Conjectura de Goldbach para %d:\n", i);
        conjecturaGoldbach(i);
        printf("\n");
    }
    return 0;
}
