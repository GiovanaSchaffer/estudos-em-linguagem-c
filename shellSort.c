#include <stdio.h>
#include <stdlib.h>
int main(){
	int tamanho;
	printf("Quantas posições terá o seu vetor?\n");
	scanf("%d", &tamanho);

	int vetor[tamanho];

	for(int i = 0; i< tamanho; ++i){
		scanf("%d", &vetor[i]);
	}

	int shellSort(int tamanho){
		int pulo = tamanho/2;
		while(pulo>0){
			for(int i = pulo; i<tamanho; ++i){
				int aux;
				int j = i-pulo;
				if(vetor[i]< vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
					while(j-pulo>=0){
						if (vetor[j]<vetor[j-pulo]){
							aux = vetor[j];
							vetor[j] = vetor[j-pulo];
							vetor[j-pulo] = aux;
							j-=pulo;
						}
						else
							break;
					}
				}
			}
			pulo /= 2;
		}
		return *vetor;
	}

	*vetor = shellSort(tamanho);
	printf("O seu vetor ficou: \n");

	for(int i = 0; i<tamanho; ++i){
		printf("%d ",vetor[i] );
	}
	printf("\n");

	return 0;
}

/*

pulo = tamanho/2  
pulo = 9/2 = 4
começamos pelo pulo e vamos variando até o pulo<tamanho

para (pulo, pulo/2>=0;, pulo = pulo/2)

	i = pulo, i<tamanho, ++i //pulo novo
	e comparamos o pulo novo com o pulo antigo
	int j = i-pulo;
	se vetor[i]< vetor[i-pulo] //pulo = pulo antigo
		troca
		j = i-pulo;
		while(j-pulo>=0)
			se vetor[j]< vetor[j-pulo]
				troca;
				j = j- pulo;
			else
				break

		j está variando de j = o; j<=pulo; ++j
		se j-pulo >=0, se vetor[j]<[j-pulo]: troca


		| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
		| 14| 18| 19| 37| 23| 40| 29| 30| 11| 
1p		| 11| 18| 19| 30| 14| 40| 29| 37| 23| pulo = 4
2p		| 11| 18| 14| 30| 19| 37| 23| 40| 29| pulo = 2
3p		| 11| 14| 18| 19| 23| 29| 30| 37| 40| pulo = 1
4p		|   |   |   |   |   |   |   |   |   |
5p		|   |   |   |   |   |   |   |   |   |
6p		|   |   |   |   |   |   |   |   |   |

*/
