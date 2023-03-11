#include <stdio.h>
#include <stdlib.h>

// Como criar vari�veis e ler caracteres com a fun��o getchar
// Como criar vari�veis e ler caracteres com a fun��o getc
// Como criar vari�veis e ler caracteres com a fun��o fgetc
// Como ler v�rios valores do teclado com a fun��o scanf()

int useGetchar() {
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();
    fflush(stdin);

    /* Quando getchar() � executada, ela come�a a escutar
    eventos do teclado, retornando a primeira tecla
    digitada, que ser� seu rerorno. */

    printf("Caractere digitado: %c\n", letra);

    return 0;
}

int useGetc() {
    char letra, letra2;

    printf("Digite uma letra: ");
    letra = getc(stdin);
    fflush(stdin);

    /* getc() pode receber entrada de outras fontes, como
    arquivos de texto, assim, � necess�rio especificar 'stdin',
    entrada padr�o do computador (teclado). */

    printf("Caractere digitado: %c\n", letra);

    printf("Digite uma letra: ");

    letra2 = getc(stdin); // Teste de buffer
    // O buffer deve ser limpo depois de cada fun��o usada para entrada.
    fflush(stdin);

    printf("Caractere digitado: %c", letra2);
    return 0;
}

int usefGetc() {

    /* Fun��es que iniciam em 'f' geralmente tratam de arquivos */

    char letra;

    printf("\nDigite uma letra: ");
    letra = fgetc(stdin);
    /* fgetc() tamb�m recebe par�metros de "endere�amento de entrada" */
    printf("Caractere digitado: %c", letra);
    fflush(stdin); // Limpando buffer

    return 0;
}

int multScanf() {

    int n1, n2, n3;

    printf("\nDigite 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    fflush(stdin);

    printf("Numero digitados: %d, %d e %d.", n1, n2, n3);

    // Note que o buffer n�o precisou ser limpo ap�s cada caractere.

    return 0;
}

int main()
{
    useGetchar();
    useGetc();
    usefGetc();
    multScanf();

    return 0;
}
