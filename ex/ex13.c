#include <stdio.h>
#include <math.h>

void main() 
{
    int comprimidosCaixa, quantComprimidos;
    float quantCaixas;

    printf("Quantos comprimidos existem por caixa? ");
    scanf("%d", &comprimidosCaixa);

    printf("Quantos comprimidos serao consumidos por dia? ");
    scanf("%d", &quantComprimidos);

    quantCaixas = ceil((float)quantComprimidos*30 / comprimidosCaixa);

    printf("Serao necessarias %.0f caixas por mes.", quantCaixas);
}