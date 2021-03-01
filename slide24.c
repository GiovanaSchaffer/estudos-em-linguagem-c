#include <stdio.h>
#include <stdlib.h>
int main(){

	int n, elemento; 
	printf("Quantos elementos terá o vetor? ");
	scanf("%i",&n);
	
	int vetor[n];

	printf("Insira os %i elementos em ordem crescente: ", n);

	for(int j = 0; j<n; ++j){
		scanf("%i", &vetor[j]);
	}

	printf("\nQual elemento deseja procurar? ");
	scanf("%i", &elemento);

	int pesquisaBinaria(int n, int vetor[], int elemento){

		int inf = 0;
		int sup = n-1;
		int meio;

		while( inf <= sup) {
			meio = (inf + sup) / 2;
			if (elemento == vetor[meio]){
				return meio;
			}

			if( elemento < vetor[meio]){
				sup = meio - 1;
			}else{
				inf = meio + 1;
			}
		}
		return -1;
	}

	int res = pesquisaBinaria(n,vetor,elemento);

	if(res == -1){
		printf("Elemento não encontrado. \n");
	}else{
		printf("Elemento encontrado na posição %i do vetor.\n", res+1);
	}

	return 0;
}