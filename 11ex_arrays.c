#include <stdio.h>

int main(int argc, char *argv[])
{
	int numeros[4] = {0};
	char nombre[4] = {'a'};
	
	printf("números: %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3]);
	printf("cada nombre: %c %c %c %c\n", nombre[0], nombre[1], nombre[2], nombre[3]);
	printf("nombre: %s\n", nombre);
	
	//configuramos los números
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	
	//configuramos los nombres
	nombre[0] = 'A';
	nombre[1] = 'l';
	nombre[2] = 'e';
	nombre[3] = '\0';
	
	//imprimimos inicializados
	printf("numeros: %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3]);
	printf("cada nombre: %c %c %c %c\n", nombre[0], nombre[1], nombre[2], nombre[3]);

	printf("nombre: %s\n", nombre);
	char *otra = "Ale";
	
	printf("otra forma: %s\n", otra);
	printf("otra forma 2: %c %c %c %c\n", otra[0], otra[1], otra[2], otra[3]);
	
	return 0;
}
