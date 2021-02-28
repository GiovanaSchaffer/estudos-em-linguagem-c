#include <stdio.h>
#include <stdlib.h>
int main(){

	int num;
	printf("Digite um número para calcularmos o fatorial: ");
	scanf("%i", &num);

	int fat = 1;
	int i = 1;

	while(i<=num){
		fat *= i;  
		++i;
	}

	printf("O fatorial de %i é %i.\n",num,fat);

	return 0;
}
