#include <stdio.h>

void main()
{
    float vDepositado, vTotal;
    int mesesDeposito;
    printf("Qual o valor que você deposita na poupança por mês?\n");
    scanf("%f", &vDepositado);
    printf("Em quantos meses o depósito foi efetuado?\n");
    scanf("%d", &mesesDeposito);
    vTotal = vDepositado * mesesDeposito;
    printf("Parabéns, o valor poupado esse ano foi de: R$ %.2f", vTotal);
}