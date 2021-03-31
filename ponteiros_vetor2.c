#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vetor[], const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n; //vai apontar para o último membro

	for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro){
		soma += *ponteiro;
	}

	return soma;
}


int main(){

	int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

	printf("A soma dos membros do vetor = %d\n",somarVetor(vetor,10) );
	
	return 0;
}