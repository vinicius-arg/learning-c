#include <stdio.h>
#include <stdlib.h>

int main()
{
    // O & do scanf serve para referenciar um endere�o de mem�ria
    // O padr�o para a exibi��o de n�meros float � 6 casas decimais

    int v1;
    float v2;

    printf("Digite um valor: ");
    scanf("%d", &v1);

    v2 = v1 / 2;

    printf("Valor digitado: %.1f * 2", v2);

    sexo();

    return 0;
}
