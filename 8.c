#include <stdio.h>

int main() {
    // Declaração das variáveis
    float salarioAtual, percentualReajuste, novoSalario;

    // Solicita ao usuário que informe o salário mensal atual
    printf("Informe o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    // Solicita ao usuário que informe o percentual de reajuste
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Calcula o novo salário
    novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));

    // Exibe o resultado
    printf("O novo salario eh: %.2f\n", novoSalario);

    return 0;
}
