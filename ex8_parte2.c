#include <stdio.h>

//ejercicio básico con if para determinar si mayor de edad

int main(int argc, char *argv[]) {
	int edad = 21;
	
	if (edad >= 21) {
		printf("Eres mayor de edad! Puedes tomar alcohol\n");
		}
		else {
			printf("No eres mayor de edad, no puedes tomar alhocol");
		}
		return 0;
}
