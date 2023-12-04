#include <stdio.h>

int main() {
    // Declaração das variáveis
    int anos, meses, dias, idadeEmDias;

    // Solicita ao usuário que informe a idade em anos, meses e dias
    printf("Informe a idade em anos, meses e dias (no formato 'anos meses dias'): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    // Calcula a idade em dias
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    // Exibe o resultado
    printf("A idade em dias eh: %d dias\n", idadeEmDias);

    return 0;
}
