#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[3] = {1,2,3};
	int *ponteiro = vetor;
	//quando é um ponteiro apontando para um vetor, não precisa de '&'
	//agr se o ponteiro apontar para um elemento de um vetor, precisa

	printf("%d\n",*ponteiro );
	printf("%p\n", ponteiro );//%p é o certo p imprimir endereços de memoria

	int *ponteiro1 = &vetor[0];
	printf("%d\n",ponteiro1 );
	
	int *ponteiro2 = &vetor[1];
	printf("%d\n",ponteiro2 );

	int *ponteiro3 = &vetor[2];
	printf("%d\n",ponteiro3 );

	int vetor2[3] = {4,5,6};
	int *pointer = &vetor2[1];
	*(pointer + 1) = 10;

	printf("%d\n", vetor2[2]);

	return 0;
}