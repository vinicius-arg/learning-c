#include <stdio.h>

void main()
{
    float vProduto, vDesconto, vFinal;

    printf("Qual o valor do produto? ");
    scanf("%f", &vProduto);
    printf("Qual a porcentagem de desconto (0-100)? ");
    scanf("%f", &vDesconto);

    vFinal = vProduto - (vProduto * (vDesconto/100));

    printf("O valor do produto com desconto é de: %.1f", vFinal);
}