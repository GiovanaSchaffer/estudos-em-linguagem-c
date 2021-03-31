#include <stdio.h>
#include <stdlib.h>

void copiarConteudo(FILE *file, FILE *file2){
	char leitor[1000];
	while(fgets(leitor,100,file) != NULL){
		fputs(leitor,file2);
	}
}

int main(){

	FILE *file;
	file = fopen("arquivo1.txt","r");

	if(file == NULL){
		printf("Não foi possivel abrir o arquivo\n");
	}
	
	FILE *file2;
	file2 = fopen("arquivo2.txt","w");

	copiarConteudo(file,file2);

	return 0;
}