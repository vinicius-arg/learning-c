#include <stdio.h>
#include <stdlib.h>

// Como criar variáveis e ler caracteres com a função getchar
// Como criar variáveis e ler caracteres com a função getc
// Como criar variáveis e ler caracteres com a função fgetc
// Como ler vários valores do teclado com a função scanf()

int useGetchar() {
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();
    fflush(stdin);

    /* Quando getchar() é executada, ela começa a escutar
    eventos do teclado, retornando a primeira tecla
    digitada, que será seu rerorno. */

    printf("Caractere digitado: %c\n", letra);

    return 0;
}

int useGetc() {
    char letra, letra2;

    printf("Digite uma letra: ");
    letra = getc(stdin);
    fflush(stdin);

    /* getc() pode receber entrada de outras fontes, como
    arquivos de texto, assim, é necessário especificar 'stdin',
    entrada padrão do computador (teclado). */

    printf("Caractere digitado: %c\n", letra);

    printf("Digite uma letra: ");

    letra2 = getc(stdin); // Teste de buffer
    // O buffer deve ser limpo depois de cada função usada para entrada.
    fflush(stdin);

    printf("Caractere digitado: %c", letra2);
    return 0;
}

int usefGetc() {

    /* Funções que iniciam em 'f' geralmente tratam de arquivos */

    char letra;

    printf("\nDigite uma letra: ");
    letra = fgetc(stdin);
    /* fgetc() também recebe parâmetros de "endereçamento de entrada" */
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

    // Note que o buffer não precisou ser limpo após cada caractere.

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
