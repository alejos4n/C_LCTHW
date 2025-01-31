#include <stdio.h>

int main(int  argc, char *argv[])
{
	//creamos dos arreglos
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "frank", "mary", "jhon", "lisa"};
	
	//obtebemos las edades
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	//indexando
	for (i = 0; i < count; i ++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	printf("---\n");
	
	//configuro los punteros para iniciar los arrays
	int *cur_age = ages;
	char **cur_name = names;
	
	//segunda forma de usar punteros
	for (i = 0; i < count; i++) {
		printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
	}
	
	printf("---\n");
	
	
	//tercera forma, los punteros son solo arreglos
	for (i = 0; i < count; i++) {
		printf("%s is %d years old again\n", cur_name[i], cur_age[i]);
	}
	
	printf("---\n");
	
	//cuarta forma de tener los punteros
	for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
		printf("%s lived %d years so far \n", *cur_name, *cur_age);
	}
	
	return 0;
}
