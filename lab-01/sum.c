#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Agregar código aquí.
	int sum = 0;
	int i;
	
	for (i = 1; i < argc; i++) {
		sum += atoi(argv[i]);
	}
	
	printf("La suma es: %d\n", sum);
    // Termina la ejecución del programa.
    exit(EXIT_SUCCESS);
}
