#include <stdio.h>
#include <stdlib.h>

int memSize(){
    double x;

    printf("Tamanho em memoria: %d bytes", sizeof x);

    return 0;
}

int sizes(){
    // Int -> [-2.147.483.648, 2.147.483.647] -> 4 bytes
    // Operador 'short int' -> [-32.768, 32.767] -> 2 bytes

    /* Se ultrapassar o intervalo, a mem�ria estoura,
    se a mem�ria estoura, o valor "volta ao in�cio", como em um carrossel.
    Short usa 16 bits para guardar seu valor na mem�ria, 15 para os valores num�ricos e 1 para o sinal,
    se o d�gite mais significativo for igual a 1, o n�mero ser� negativo, sen�o, ser� positivo.
    N�o usar o sinal libera um bit, � por isso que o operador 'unsigned' permite valores mais altos.
    */

    long long int x;

    /* Operador 'long' aumenta a ocupa��o de mem�ria de um int para 4 bytes, por�m, em
    novos computadores, int j� ocupa 4 bytes naturalmente, logo, � necess�rio dobrar o
    long e usar uma m�scara espec�fica. (%ld para long int, %lld para long long int)

    Long tem um uso m�ximo de duas vezes, short, apenas uma.
    */
    printf("Tamanho int: %d bytes", sizeof x);

    float y;

    // N�o d� pra usar operadores 'short' e 'long' no float;
    // Precis�o simples nas casas decimais;

    long double z;

    // Precis�o dupla nas casas decimais;

    printf("\nTamanho double: %d bytes", sizeof z);

    return 0;
}

int floatDouble(){

    float x = 0.1;
    float y = 0.2;

    printf("Precisao de float: %.30f", x + y);

    double x0 = 0.1;
    double y0 = 0.2;

    printf("\nPrecisao de double: %.30lf", x0 + y0);

    // O Windows n�o consegue imprimir um 'long double', logo
    // usaremos uma fun��o do compilador.

    long double x1 = 0.1;
    long double y1 = 0.2;

    __mingw_printf("\nPrecisao long double: %.30Lf", x1 + y1);

    return 0;
}

int main(){
    floatDouble();
    return 0;
}
