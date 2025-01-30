#include <stdio.h>

int add(int a, int b)
{
	int addition;
	
	addition = a + b;
	
	return addition;

}

int main(int c, int d)
{
	printf("Introduce un número a sumar:");
	scanf("%d", &c);
	
	printf("Introduce otro número a sumar: ");
	scanf("%d", &d);
	
	printf("La suma de %d + %d es igual a %d\n", c, d, add(c, d)); //al final se llama a la función add
	
	return 0;
	
}


