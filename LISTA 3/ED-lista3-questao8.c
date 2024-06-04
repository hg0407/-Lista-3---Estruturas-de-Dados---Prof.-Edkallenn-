#include <stdio.h>

typedef struct {
    double real;
    double imaginario;
} Complexo;

Complexo criarComplexo(double real, double imaginario) {
    Complexo c;
    c.real = real;
    c.imaginario = imaginario;
    return c;
}

Complexo somarComplexos(Complexo c1, Complexo c2) {
    Complexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

Complexo subtrairComplexos(Complexo c1, Complexo c2) {
    Complexo resultado;
    resultado.real = c1.real - c2.real;
    resultado.imaginario = c1.imaginario - c2.imaginario;
    return resultado;
}

Complexo multiplicarComplexos(Complexo c1, Complexo c2) {
    Complexo resultado;
    resultado.real = c1.real * c2.real - c1.imaginario * c2.imaginario;
    resultado.imaginario = c1.real * c2.imaginario + c1.imaginario * c2.real;
    return resultado;
}

Complexo dividirComplexos(Complexo c1, Complexo c2) {
    Complexo resultado;
    double divisor = c2.real * c2.real + c2.imaginario * c2.imaginario;
    resultado.real = (c1.real * c2.real + c1.imaginario * c2.imaginario) / divisor;
    resultado.imaginario = (c1.imaginario * c2.real - c1.real * c2.imaginario) / divisor;
    return resultado;
}

void mostrarComplexo(Complexo c) {
    printf("(%lf, %lf)\n", c.real, c.imaginario);
}

int main() {
    Complexo c1 = criarComplexo(3.0, 4.0);
    Complexo c2 = criarComplexo(1.0, 2.0);

    printf("c1 = ");
    mostrarComplexo(c1);
    printf("c2 = ");
    mostrarComplexo(c2);

    printf("Soma: ");
    mostrarComplexo(somarComplexos(c1, c2));

    printf("Subtracao: ");
    mostrarComplexo(subtrairComplexos(c1, c2));

    printf("Multiplicacao: ");
    mostrarComplexo(multiplicarComplexos(c1, c2));

    printf("Divisao: ");
    mostrarComplexo(dividirComplexos(c1, c2));

    return 0;
}
