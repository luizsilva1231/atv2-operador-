#include <stdio.h>

int main() {
    // Declaração das variáveis
    float custo, frete, despesas, valorVenda, lucro;

    // Solicita ao usuário que informe o custo da mercadoria
    printf("Informe o custo da mercadoria: ");
    scanf("%f", &custo);

    // Solicita ao usuário que informe o valor do frete
    printf("Informe o valor do frete: ");
    scanf("%f", &frete);

    // Solicita ao usuário que informe as despesas eventuais
    printf("Informe o valor das despesas eventuais: ");
    scanf("%f", &despesas);

    // Calcula o custo total
    float custoTotal = custo + frete + despesas;

    // Solicita ao usuário que informe o valor de venda
    printf("Informe o valor de venda: ");
    scanf("%f", &valorVenda);

    // Calcula o lucro e a percentagem de lucro
    lucro = valorVenda - custoTotal;
    float percentagemLucro = (lucro / custoTotal) * 100;

    // Exibe os resultados
    printf("\nResumo:\n");
    printf("Custo Total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentagem de Lucro: %.2f%%\n", percentagemLucro);

    return 0;
}
