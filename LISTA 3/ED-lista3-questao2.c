#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char dataNascimento[20];
    char RG[20];
    char dataAdmissao[20];
    float salario;
} Empregado;

void lerEmpregado(Empregado *emp) {
    printf("Nome: ");
    scanf("%s", emp->nome);
    printf("Data de Nascimento: ");
    scanf("%s", emp->dataNascimento);
    printf("RG: ");
    scanf("%s", emp->RG);
    printf("Data de Admissao: ");
    scanf("%s", emp->dataAdmissao);
    printf("Salario: ");
    scanf("%f", &emp->salario);
}

void escreverEmpregado(Empregado emp) {
    printf("Nome: %s\n", emp.nome);
    printf("Data de Nascimento: %s\n", emp.dataNascimento);
    printf("RG: %s\n", emp.RG);
    printf("Data de Admissao: %s\n", emp.dataAdmissao);
    printf("Salario: %.2f\n", emp.salario);
}

int main() {
    Empregado emp;
    
    lerEmpregado(&emp);

    printf("\nDados do Empregado:\n");
    escreverEmpregado(emp);

    return 0;
}
