#include <stdio.h>
int main(){

	char palavra[1000];
	int n;
	
	printf("Digite sua palavra: \n");
	scanf("%s", palavra);

	int tamanho;

	for(int i = 0; palavra[i]!= '\0'; ++i){
		tamanho = i;
	}tamanho++;

	int j;
	char k,d;

	int insertSort(int tamanho, char *palavra){
		for(int i = 1; i<tamanho; ++i ){
			j = i;
			k = palavra[i];
			while(j>=1 && palavra[j-1] > k){
				d = palavra[j];
				palavra[j] = palavra[j-1];
				palavra[j-1] = d;
				--j;
			}
			if(palavra[j-1]< k){
				palavra[j] = k;
			}
		}
		return printf("Sua palavra ordenada: %s\n", palavra);
	}

		insertSort(tamanho, palavra);

		return 0;
	}