#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Agregar código aquí.
    int c;

    while(1) {
        while((c = getchar()) != ' ' && c != '\t' != EOF) {
            putchar(c);
        }

        printf("\n");

        if(c == EOF) {
            break;
        }
    }
    // Termina la ejecución del programa.
    exit(EXIT_SUCCESS);
}
