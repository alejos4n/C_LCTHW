#include <stdio.h>

int main(int argc, char *argv[])
{
	//trabajando con arreglos
	int areas[] = {10, 12, 13, 14, 20};
	char nombre[] = "Alejandro";
	char nombre_completo[] = {'A','l','e','j','a','n','d','r','o','s','A','n'};
	
	printf("Imprimo la variable int areas: areas[] = {10, 12, 13, 14, 20}\n");
	printf("El tamaño de un entero en bytes: %ld\n", sizeof(int));
	printf("El tamaño en bytes de la variable areas(int[]): %ld\n", sizeof(areas));
	printf("El tamaño de la variable areas es 20 bytes porque 5 enteros, 5*4=20\n");
	printf("El número de elementos en la variable areas: %ld\n", sizeof(areas)/sizeof(int));
	printf("El primer valor de areas es %d, el segundo es %d\n", areas[0], areas[1]);
	
	//ahora trabajamos con char
	printf("El arreglo char nombre[] = ""Alejandro""\n");
	printf("El tipo de dato <char> tiene un tamaño de %ld byte\n", sizeof(char));
	printf("El tamaño de la variable nombre de tipo char %ld\n", sizeof(nombre));
	printf("El tamaño es 10 porque C agrega el caracter nulo \\0 al final \n");
	printf("Al ser una cadena siempre dará los caracteres que tenga más el nul\n");
	printf("El número de chars %ld\n", sizeof(nombre)/sizeof(char));
	
	//trabajamos con nombre_completo
	printf("El tamaño de nombre_completo %ld\n", sizeof(nombre_completo));
	printf("El número de caracteres %ld\n", sizeof(nombre_completo)/sizeof(char));
	printf("nombre=\"%s\"y nombre_completo\"%s\"\n", nombre, nombre_completo);
	
	return 0;
	
}
