#include <stdio.h>
#include <stdlib.h>

int main(){

	typedef int inteiro;
	typedef float real;
	typedef char string;

	inteiro idade;
	real CR;
	string nome[100];

	printf("Digite seu nome: \n");
	scanf("%s", nome);
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	printf("Digite seu CR: \n");
	scanf("%f", &CR);

	printf("Seu nome é %s, você tem %d anos e seu CR é de %.2f\n",nome, idade,CR );
	return 0;
}