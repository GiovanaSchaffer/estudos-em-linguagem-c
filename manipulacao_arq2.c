#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *file;

	file = fopen("teste.txt","r");

	if(file == NULL){
		printf("Arquivo não pode ser aberto\n");
		return 0;
	}

	char frase[100];
	//fgets = file get string
	while(fgets(frase,100,file) != NULL){
		printf("%s\n",frase);
	}
	
	fclose(file);
	
	return 0;
}