#include <stdio.h>

int main() {
    // Declaração das variáveis
    float comprimento, largura, area;

    // Solicita ao usuário que informe as medidas da sala
    printf("Informe o comprimento da sala em metros: ");
    scanf("%f", &comprimento);

    printf("Informe a largura da sala em metros: ");
    scanf("%f", &largura);

    // Calcula a área da sala
    area = comprimento * largura;

    // Exibe o resultado
    printf("A area da sala eh %.2f metros quadrados.\n", area);

    return 0;
}
