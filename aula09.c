#include <stdio.h>
#include <stdlib.h>
int main(){

	//operadores de comparação == ou !=
	// comparação positiva -> 1
	// comparação negativa -> 0
	
	int num;
	printf("Digite um número: ");
	scanf("%d",&num);

	if(num%2 == 0){
		printf("O número é par!\n");
	}else{
		printf("O número é ímpar!\n");
	}

	return 0;
}
