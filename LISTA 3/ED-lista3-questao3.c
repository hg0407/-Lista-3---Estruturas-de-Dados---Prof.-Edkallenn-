#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char sigla[4];
    char cidade[51];
    char pais[31];
    float taxa;
    int capacidade;
} Aeroporto;

void lerAeroporto(Aeroporto *aero) {
    printf("Sigla: ");
    scanf("%s", aero->sigla);
    printf("Cidade: ");
    scanf("%s", aero->cidade);
    printf("Pais: ");
    scanf("%s", aero->pais);
    printf("Taxa: ");
    scanf("%f", &aero->taxa);
    printf("Capacidade: ");
    scanf("%d", &aero->capacidade);
}

void escreverAeroporto(Aeroporto aero) {
    printf("Sigla: %s\n", aero.sigla);
    printf("Cidade: %s\n", aero.cidade);
    printf("Pais: %s\n", aero.pais);
    printf("Taxa: %.2f\n", aero.taxa);
    printf("Capacidade: %d\n", aero.capacidade);
}

int main() {
    Aeroporto aero;
    
    lerAeroporto(&aero);

    printf("\nDados do Aeroporto:\n");
    escreverAeroporto(aero);

    return 0;
}
