#include <stdio.h>
#include<stdlib.h>
int main(){


	int n;
	printf("Quantas posições terá o seu vetor de inteiros? \n");
	scanf("%i",&n);
	printf("\n\n\n");
	
	int vetor[n];

	int soma = 0;
	for(int i = 0; i<n; ++i){
		printf("Qual é o valor do seu %i elemento: \n",i+1);
		scanf("%i",&vetor[i]);
	}
	printf("\n\n\n");

	for(int i = 0; i<n; ++i){
		soma += vetor[i];
	}

	printf("A soma dos elementos do seu vetor foi = %i\n",soma  );


	return 0;
}