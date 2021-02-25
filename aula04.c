#include <stdio.h>
#include <stdlib.h>
int main(){

	int num1, num2;
	num1 = 15;
	num2 = 20;

	int soma = num1 + num2;

	printf("O resultado da soma é: %i\n",soma);

	int sub = num2 - num1;

	printf("O resultado da subtração é : %i\n",sub);

	int mult = num1 * num2;
	printf("O resultado da multiplicação é: %i\n",mult);

	int div = num2/3;
	//A divisão em C é sempre exata, ela sempre exclui as casas decimais.
	printf("O resultado da divisão é: %i\n",div);

	return 0;
}
