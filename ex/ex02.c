#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("**Nao use acentuacao em entradas.\n\n");

    int quant, ideal, comprar;
    char produto[20];

    printf("Qual o referido produto?\n");
    fgets(produto, 20, stdin);
    printf("Quanto de %s ha no estoque?\n", produto);
    scanf("%d", &quant);
    printf("Qual o estoque ideal?\n");
    scanf("%d", &ideal);
    comprar = ideal - quant;

    if (comprar == 0)
    {
        printf("Quantidade ideal de %s no estoque.", produto);
    } else if (comprar < 0) {
        printf("Ha %s de sobra no estoque. Saldo: %d", produto, abs(comprar));
    } else {
        printf("E preciso comprar %d unidades de %s.", comprar, produto);
    }
}