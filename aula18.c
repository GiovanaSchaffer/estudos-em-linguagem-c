#include <stdio.h>
#include <stdlib.h>
int main(){
	int tabuada;
	printf("Digite a tabuada que você deseja: ");
	scanf("%i",&tabuada);
	for(int i = 1; i<=10; ++i){
		printf("%i X %i = %i\n",i,tabuada,i*tabuada);

	}

	return 0;
}
