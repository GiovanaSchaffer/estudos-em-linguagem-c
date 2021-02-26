#include <stdio.h>
#include <stdlib.h>
int main(){

	/*

	1)char
	2)int
	3)float
	4)double
	5)void

	1)signed   -> + e -
	2)unsigned -> +
	3)long     -> aumenta a capacidade de armazenamento das nossas variáveis
	4)short    -> diminuir o tamanho de armazenamento

	*/

	unsigned short int u;
	printf("Variável u -> %i\n",sizeof(u));

	int i = 10;
	printf("Variável i -> %i\n",sizeof(i));
	

	return 0;
}
