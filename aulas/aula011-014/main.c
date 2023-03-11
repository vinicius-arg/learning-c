#include <stdio.h>
#include <stdlib.h>

// Programa para idade, peso, sexo e altura do usuário

int main()
{
    int idade;
    float peso, altura;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("\n\n===================\n");
    printf("    Idade: %d", idade);
    printf("\n  Peso (kg): %.2f", peso);
    printf("\n  Altura (m): %.2f", altura);
    printf("\n     Sexo: %c", sexo);
    printf("\n===================");

    /* É essencial limpar o buffer do teclado antes de ler um caractere,
    pois ele lê qualquer tecla indesejada que esteja lá. */

    // O espaço antes da máscara " %c", é um comando que diz ao C para ignorar
    // Tab, Espaço e Enter.

    // Obs.: fflush(stdin); só funciona no Windows, além de não funcionar em 100% dos casos.

    return 0;
}
