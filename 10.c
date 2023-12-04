#include <stdio.h>

int main() {
    // Declaração das variáveis
    int carrosVendidos;
    float valorVendas, salarioFixo, comissaoPorCarro, salarioFinal;

    // Solicita ao usuário que informe os dados do vendedor
    printf("Informe o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Informe o valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Informe o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Informe o valor da comissao por carro vendido: ");
    scanf("%f", &comissaoPorCarro);

    // Calcula o salário final do vendedor
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (0.05 * valorVendas);

    // Exibe o resultado
    printf("O salario final do vendedor eh: %.2f\n", salarioFinal);

    return 0;
}
