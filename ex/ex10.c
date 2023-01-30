#include <stdio.h>

float media(float n1, float n2) 
{
    float notaMinima = 7.0;

    float media, notaNecessaria;
    media = (n1*1 + n2*2 + 0*3) / 6;
    notaNecessaria = 2*(notaMinima - media);

    return notaNecessaria;
}

void main() 
{
    float nota[2], notaNecessaria;
    int cont;

    for(cont = 1; cont <= 2; cont++) {
        printf("Digite a %da nota (PESO %d):\n", cont, cont);
        scanf("%f", &nota[(cont-1)]);
    }

    notaNecessaria = media(nota[0], nota[1]);

    printf("O aluno precisa de %.1f pontos pra passar.\n", notaNecessaria);
}