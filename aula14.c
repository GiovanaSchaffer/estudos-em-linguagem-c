#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int contador = 0;
	char c;
	do{
		contador+=1;
		printf("Digite 0 para sair do looping.\n");
		printf("Quantidade de vezes = %i\n",contador);
		c = getchar();

	}while(c!= '0');

	return 0;
}
