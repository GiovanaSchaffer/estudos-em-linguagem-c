#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	printf("Digite um inteiro positivo para calcularmos o fatorial duplo: \n");
	scanf("%i",&n);

	int j = 0;
	int fatD = 1;
	for(int i = 1; j<n; i = i+2){
		if(i == n){
			fatD*= i;
			break;
		}
		else{
			fatD*= i;
			++j;
		}
	}

	printf("O fatorial duplo de %i é: %i\n",n,fatD);

	return 0;
}