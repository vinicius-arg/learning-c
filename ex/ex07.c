#include <stdio.h>

void main()
{
    int alturaDegrau, qBlocos, totBlocos, qDegraus;

    printf("Informe a quantidade de blocos do 1o degrau: ");
    scanf("%d", &qBlocos);
    printf("Informe a altura do degrau: ");
    scanf("%d", &alturaDegrau);

    totBlocos = qBlocos;
    qDegraus = 1;

    while(qDegraus <= 4) {
        printf("Blocos no %do degrau: %d\n", qDegraus, totBlocos);

        totBlocos = totBlocos + alturaDegrau;
        qDegraus++;
    }
}