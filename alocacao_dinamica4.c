#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p = (int *) calloc(5,sizeof(int));
	*p = 10;
	*(p+1) = 20;
	/*
	O primeiro argumento é quantos daquele tipo 
	vc deseja alocar e inicializa tudo como 0
	*/
	printf("%d\n", *p );
	printf("%d\n",*(p+1));

	for(int i = 0; i<10; ++i){
		printf("Endereço de p[%d] = %p | Valor de p[%d] = %d\n",i, &p[i],i,*(p+i));
	}


	return 0;
}