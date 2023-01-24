#include <stdio.h>

void main()
{
    int cont; 
    float nota[3], nFinal;

    cont = 1;

    while(cont <= 3)
    {
        printf("Qual foi a %da nota do aluno? ", cont);
        scanf("%f", &nota[(cont-1)]);
        cont++;
    }

    nFinal = (nota[0] + nota[1] + nota[2])/3;

    printf("A média final do aluno é de: %.1f.", nFinal);
}