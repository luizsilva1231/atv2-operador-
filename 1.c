#include <stdio.h>

int main() {
    // Declaração das variáveis
    float num1, num2, soma, subtracao, multiplicacao, divisao;

    // Solicita ao usuário que informe os dois números
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    // Realiza as operações
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verifica se o divisor (num2) é zero para evitar divisão por zero
    if (num2 != 0) {
        divisao = num1 / num2;
        // Exibe os resultados
        printf("Soma: %.2f\n", soma);
        printf("Subtracao: %.2f\n", subtracao);
        printf("Multiplicacao: %.2f\n", multiplicacao);
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Erro: Divisao por zero.\n");
    }

    return 0;
}