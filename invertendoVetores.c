#include <stdio.h>
#include <stdlib.h>
int main(){

	int pos;
	printf("Quantas posições terá o vetor? ");
	scanf("%i",&pos);

	int vetor[pos];

	for(int i = 0; i<pos ;++i){
		printf("Digite um valor para a %i posição do vetor: ", i+1);
		scanf("%i",&vetor[i]);
	}

	int k = vetor[0];
	vetor[0] = vetor[pos-1];
	vetor[pos-1] = k;

	for(int a = 1; a < pos/2; ++a){
		k = vetor[a];
		vetor[a] = vetor[(pos-1)-a];
		vetor[(pos-1)-a] = k;
			//printf("%i  %i\n",vetor[a], vetor[pos-a]);
	}

	for(int j = 0; j<pos; ++j){
		printf("%i ",vetor[j]);
	}
	printf("\n\n");

	return 0;
}