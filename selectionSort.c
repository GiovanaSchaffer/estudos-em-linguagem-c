#include <stdio.h>
#include <stdlib.h>


int main(){

	char palavra[100]; 
	
	printf("Digite sua palavra para ordenarmos: \n");

	scanf("%s",palavra);

	int tamanho;

	for(int i = 0; palavra[i] != '\0'; ++i)
		tamanho = i;
	
	// printf("O tamanho é %i\n", tamanho );
		
	char k;

	int insertSort(int tamanho, char *palavra, char k ){
		for(int i = 0; i<tamanho; ++i){
			for(int j = i+1; j<=tamanho; ++j){
				if(palavra[j] < palavra[i]){
					k = palavra[i];
					palavra[i] = palavra[j];
					palavra[j] = k;
				}	 
			}	
		}

		return printf("Sua palavra ordenada: %s\n", palavra);	
	}
	
	insertSort(tamanho,palavra,k);


	return 0;
}