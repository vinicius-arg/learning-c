#include <stdio.h>

void main()
{
    int amarela, verm, branca;
    float vAmarela, vVerm, vBranca, vFinal;

    printf("Qual o valor da flor amarela? ");
    scanf("%f", &vAmarela);
    printf("Qual o valor da flor vermelha? ");
    scanf("%f", &vVerm);
    printf("Qual o valor da flor branca? ");
    scanf("%f", &vBranca);

    printf("Informe a quantidade de flores amarelas desejadas no buquê: ");
    scanf("%d", &amarela);
    printf("Informe a quantidade de flores vermelhas desejadas no buquê: ");
    scanf("%d", &verm);
    printf("Informe a quantidade de flores brancas desejadas no buquê: ");
    scanf("%d", &branca);

    vFinal = (amarela * vAmarela) + (verm * vVerm) + (branca * vBranca);

    printf("O valor do buquê é de R$%.2f", vFinal);
}