#include <stdio.h>

void main() 
{
    const int VET_EXPERIENTE = 4;

    int gatos, castracoesExp, castracoesInexp;

    printf("Quantos gatos foram capturados? ");
    scanf("%d", &gatos);

    castracoesExp = gatos / VET_EXPERIENTE;
    castracoesInexp = gatos % VET_EXPERIENTE;

    printf("Veterinarios experientes: %d castracoes cada.\n", castracoesExp);
    printf("Veterinario inexperiente: %d castracoes.\n", castracoesInexp);
}