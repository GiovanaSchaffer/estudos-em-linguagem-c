#include <stdio.h>
#include <stdlib.h>

void testeVariavel(int x){
	++x;
}

void testePonteiro(int *px){
	++*px;
}

int main(){

	int teste = 1;
	testeVariavel(teste);//realiza uma cópia que nada tem a ver com a var teste

	printf("%d\n",teste);

	int *pteste = &teste;

	testeVariavel(teste);
	testePonteiro(pteste);//aqui não realiza cópia, vai até o local onde 
						  //está armazenado o ponteiro e modifica

	printf("%d\n",teste);
	printf("%d\n",*pteste );

	return 0;
}