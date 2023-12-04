#include <stdio.h>

int main() {
    // Declaração das variáveis
    float custoFabrica, percentualDistribuidor, impostos, custoFinal;

    // Solicita ao usuário que informe o custo de fábrica do carro
    printf("Informe o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    // Define os percentuais
    percentualDistribuidor = 0.28;  // 28%
    impostos = 0.45;  // 45%

    // Calcula o custo final ao consumidor
    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);

    // Exibe o resultado
    printf("O custo final ao consumidor eh: %.2f\n", custoFinal);

    return 0;
}
