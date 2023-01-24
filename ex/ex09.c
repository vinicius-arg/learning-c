#include <stdio.h>

void main()
{
    int saque;
    int n100, n50, n20, n10, n5, n2;

    printf("Quanto deseja sacar? ");
    scanf("%d", &saque);

    printf("Valor do saque: %d\n\nComposição:\n", saque);
    
    n100 = saque / 100;
    n50 = saque / 50;
    n20 = saque / 20;
    n10 = saque / 10;
    n5 = saque / 5;
    n2 = saque / 2;

    printf("%d cédulas de R$100\n", n100);
    saque = saque - (n100 * 100);
    n50 = saque / 50;

    printf("%d cédulas de R$50\n", n50);
    saque = saque - (n50 * 50);
    n20 = saque / 20;

    printf("%d cédulas de R$20\n", n20);
    saque = saque - (n20 * 20);
    n10 = saque / 10;

    printf("%d cédulas de R$10\n", n10);
    saque = saque - (n10 * 10);
    n5 = saque / 5;

    printf("%d cédulas de R$5\n", n5);
    saque = saque - (n5 * 5);
    n2 = saque / 2;

    printf("%d cédulas de R$2\n", n2);
    saque = saque - (n2 * 2);
}