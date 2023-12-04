#include <stdio.h>

int main() {
    // Declaração das variáveis
    float valorEmReais, cotacaoDolar, valorEmDolares;

    // Solicita ao usuário que informe o valor em reais
    printf("Informe o valor em reais: ");
    scanf("%f", &valorEmReais);

    // Solicita ao usuário que informe a cotação do dólar
    printf("Informe a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    // Calcula o valor em dólares
    valorEmDolares = valorEmReais / cotacaoDolar;

    // Exibe o resultado
    printf("%.2f reais equivalem a %.2f dolares.\n", valorEmReais, valorEmDolares);

    return 0;
}
