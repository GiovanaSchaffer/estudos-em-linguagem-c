#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *file; //criando um ponteiro que aponta para tipos de dados FILE

	//file = fopen("dir", "r ou w ou a");
	//se não especificar o caminho, cria onde está salvo o arq
	file = fopen("number.txt","r");

	if(file == NULL){
		printf("Arquivo não pode ser aberto\n");
		return 0;
	}

	int x,y,z;

	fscanf(file,"%d %d %d",&x, &y, &z);

	//fprintf(file,"10 20 30");//para escrever no arquivo
	printf("%d %d %d\n", x,y,z);
	fclose(file);//para fechar o arquivo dps


	//passar como parametro o diretório do arquivo
	//segundo parametro será ou r de read, ou w de write ou 
	//a de apend.
	// tudo oq for barra ao contrário deveremos colocar duas barras.
	
	//w = cria e sobreescreve;

	return 0;
}