#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *file;

	file = fopen("teste.txt","a");

	if(file == NULL){
		printf("Arquivo não pode ser aberto\n");
		return 0;
	}

	fprintf(file,"Primeira linha\n");
	
	char frase[] = "segunda linha";
	char caracter = '3';

	fputs(frase,file);
	fputc(caracter,file);

	fclose(file);
	
	return 0;
}