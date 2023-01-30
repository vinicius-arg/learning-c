#include <stdio.h>
#include <math.h>

float calculo(int castracoes, float mlC, float mlV)
{
    float mlTotal = mlC * castracoes;
    float totalVasilhame = mlTotal / mlV;

    return ceil(totalVasilhame);
}

void main()
{
    const float mlCastracao = 25.5;
    const float mlVasilhame = 500;
    const int custoVasilhame = 60;
    
    int castracoes, vasilhames;
    float custoTotal;
    
    printf("Quantas castracoes serao realizadas? ");
    scanf("%d", &castracoes);

    vasilhames = calculo(castracoes, mlCastracao, mlVasilhame);
    custoTotal = vasilhames * custoVasilhame;

    printf("Vasilhames necessarios: %d\nCusto total: R$ %.2f", vasilhames, custoTotal);
}