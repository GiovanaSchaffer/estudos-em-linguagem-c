#include <stdio.h>
#include <stdlib.h> //para alocação dinamica

int main(){

	int *p = (int *) malloc(sizeof(int));
	*p = 1000;

	printf("%d\n", *p );

	free(p);//a função free apenas desaloca mas não lida com o lixo

	int *n = (int *) malloc(sizeof(int));

	return 0;
}