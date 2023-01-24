#include <stdio.h>

void main() 
{
    int doces, salgados, convidados, qDoces, qSalgados;

    printf("Digite a quantidade estimada de doces por convidado: ");
    scanf("%d", &doces);
    printf("Digite a quantidade estimada de salgados por convidado: ");
    scanf("%d", &salgados);
    printf("Digite a quantidade de convidados: ");
    scanf("%d", &convidados);

    qDoces = doces * convidados;
    qSalgados = salgados * convidados;

    printf("Serão necessários %d doces e %d salgados.", qDoces, qSalgados);
}