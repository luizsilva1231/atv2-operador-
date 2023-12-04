#include <stdio.h>

int main() {
    // Declaração da variável
    float numero, dobro;

    // Solicita ao usuário que informe o número
    printf("Informe um numero: ");
    scanf("%f", &numero);

    // Calcula o dobro do número
    dobro = 2 * numero;

    // Exibe o resultado
    printf("O dobro de %.2f eh %.2f\n", numero, dobro);

    return 0;
}
