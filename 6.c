#include <stdio.h>
#include <math.h>

int main() {
    // Declaração das variáveis
    float raio, area;

    // Solicita ao usuário que informe o raio do círculo
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = M_PI * pow(raio, 2);

    // Exibe o resultado
    printf("A area do circulo com raio %.2f eh %.2f\n", raio, area);

    return 0;
}
