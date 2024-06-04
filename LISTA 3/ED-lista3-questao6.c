#include <stdio.h>
#include <math.h>

double raizQuadrada(double N) {
    double x = N; 
    double erro = 0.0001; 
    
    
    while (fabs(x * x - N) > erro) {
        x = (x + N / x) / 2; 
    }
    
    return x;
}

int main() {
    double N;
    printf("Digite um numero para calcular a raiz quadrada: ");
    scanf("%lf", &N);
    
    if (N < 0) {
        printf("Erro: Nao e possivel calcular a raiz quadrada de numeros negativos.\n");
        return 1; // Saída do programa com erro
    }
    
    double resultado = raizQuadrada(N);
    printf("A raiz quadrada de %.2lf eh aproximadamente %.4lf\n", N, resultado);
    
    return 0;
}
