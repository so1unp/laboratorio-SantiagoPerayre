#include <stdio.h>
#include <stdlib.h>

#define maxLetras 10

int main(int argc, char *argv[]) {
    
    // Declaracion de variables
    int frecuencia[maxLetras] = {0}; // Inicializar frecuencia con 0s
    int i;
    int c;
    int letras;
    int maxPalabras = 0;

    // Recopilar informacion introducida con la funcion getchar() y 
    // guardado en array para dibujar el histograma
    while(1) {
        letras = 0;
        
        while((c = getchar()) != ' ' && c != '\n' && c != '\t' && c != EOF) {
            letras += 1;
        }
        
        if(letras != 0) {
            frecuencia[letras] += 1;
        }

        if(c == EOF) {
            break;
        }

        if(letras > maxPalabras) {
            maxPalabras = letras;
        }
    }
    
    // Imprimir histograma
    for (i = 1; i <= maxPalabras; i++) {
        printf("%d: ", i);
        for (int j = 0; j < frecuencia[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    exit(EXIT_SUCCESS);
}
