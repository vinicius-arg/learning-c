#include <stdio.h>

void main()
{
    int capacidadeKombi = 10;
    int passageiros, viagens, coletivo;
    printf("Qual a quantidade de passageiros? ");
    scanf("%d", &passageiros);

    viagens = passageiros / capacidadeKombi;
    coletivo = passageiros % capacidadeKombi;

    printf("%d viagens de kombi e %d passagens em coletivo.", viagens, coletivo);
}