#include <stdio.h>
#include <stdlib.h>

// Programa para idade, peso, sexo e altura do usu�rio

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

    /* � essencial limpar o buffer do teclado antes de ler um caractere,
    pois ele l� qualquer tecla indesejada que esteja l�. */

    // O espa�o antes da m�scara " %c", � um comando que diz ao C para ignorar
    // Tab, Espa�o e Enter.

    // Obs.: fflush(stdin); s� funciona no Windows, al�m de n�o funcionar em 100% dos casos.

    return 0;
}
