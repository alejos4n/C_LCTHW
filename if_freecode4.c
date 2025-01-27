#include <stdio.h>

//operadores lógicos
/*nota: en C normalmente se dice que compara si algo es verdadero o falso pero eso no es cierto al cien por ciento
como C es de bajo nivel, es mas fácil comprobar si algo es cero o falso pero otra comparación es difícil
por eso es más preciso decir que las comparaciones están comparando si algo es cero(0)/falso o si es cualquier otro valor
*/
int main(void) {
	int n = 5;
	int m = 10;
	
	if(n > m || n == 15) { //usamos OR ||
		printf("n es mayor que m,  O n es igual a 15\n");
	}
	else if( n == 5 && m == 10) { // && usamos AND
		printf("n es igual a 5 y m es igual a 10!\n");
	}
	else if ( !(n == 6)) {
		printf("No es cierto que n es igual a 6!\n");
	}
	else if (n > 5) {
		printf("n es mayor que 5!\n");
	}
	
	
	return 0;
}
