#include <stdio.h>

int sexo() {

    char carac;
    int control;

    do {
        printf("\nDigite seu sexo (f, F, m ou M): ");
        scanf(" %c", &carac);

        control = 1;

        switch (carac){
            case 'f':
                break;
            case 'F':
                break;
            case 'm':
                break;
            case 'M':
                break;
            default:
                control = 0;
                printf("\nCaractere invalido.");
        }
    }
    while (control == 0);

    printf("\n\nCaractere digitado: %c", carac);

    return 0;
}
