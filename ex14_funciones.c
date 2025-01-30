#include <stdio.h>
#include <ctype.h>

/*las funciones se distinguen por el nombre
son más como un método en java
función recursiva, cuando se invocan ellas mismas
una función tiene otras tareas que se llaman parámetros*/

/*
tipo_de_retorno nombre_de_la_función (lista_de_parámetros) 
{
	cuerpo_de_la_función 
	return expresión
}
*/

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	
	for(i = 0; i < argc; i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;
	
	for(i = 0; arg[i] !='\0'; i++){
		char ch = arg[i];
		
		if(can_print_it(ch)){
			printf("'%c'==%d",ch,ch);
			}
		}
		printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main (int argc, char *argv[])
{
	print_arguments(argc, argv);
	
	return 0;
}
