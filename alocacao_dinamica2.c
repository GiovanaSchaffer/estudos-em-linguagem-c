#include <stdio.h>
#include <stdlib.h> //para alocação dinamica

int main(){
	/*
	malloc = memorie alocation, 
	nos retorna um ponteiro que
	aponta pro endereço desse bloco 
	que foi alocado quando chamamos a função malloc
	*/
	//int *p = malloc(4);//estamos solicitando 4 bytes da memoria
	int *p = (int *) malloc(sizeof(int));

	//E se eu tivesse um vetor de tamanho 10
	//int *q = malloc(10 * sizeof(int))

	/*
	 o ponteiro que a nossa variável aponta 
	 é para dados de tipo int, mas o malloc 
	 retorna um dado do tipo void, por isso 
	 precisamos fazer um casting
	*/

	//Agora podemos trabalhar com esse espaço de memoria

	*p = 1000; //valor do ponteiro p é 1000, e o ponteiro p nada 
	//mais é do que o endereço de memoria em que vamos alocar.

	printf("%d\n",*p );

	/*
	A função malloc não tira o lixo de memoria 
	quando nada é alocado naquele espaço

	Se a função malloc não conseguir alocar memoria
	retorna null, que nada + é do que um ponteiro que
	não aponta para lugar nenhum
	*/


	return 0;
}