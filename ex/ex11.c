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
    const float ML_CASTRACAO = 25.5;
    const float ML_VASILHAME = 500;
    const int CUSTO_VASILHAME = 60;
    
    int castracoes, vasilhames;
    float custoTotal;
    
    printf("Quantas castracoes serao realizadas? ");
    scanf("%d", &castracoes);

    vasilhames = calculo(castracoes, ML_CASTRACAO, ML_VASILHAME);
    custoTotal = vasilhames * CUSTO_VASILHAME;

    printf("Vasilhames necessarios: %d\nCusto total: R$ %.2f", vasilhames, custoTotal);
}