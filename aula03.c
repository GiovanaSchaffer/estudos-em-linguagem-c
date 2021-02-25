#include <stdio.h>
int main(){
	//integer %i ou %d
	//float/double %f
	//char %c
	//string %s
	//%u módulo de um número
	//%p endereço de memória
	//%e ou %E para imprimir números com notação científica
	//%% instrução para imprimir o sinal de porcentagem

	int num = 11;
	printf("%i\n",num);

	float f = 2.2;

	double d = 1.3333333;

	char letra = 'a';

	char *palavra = "Giovana";

	printf("meu float vale = %f e meu double = %f\n",f,d);

	printf("Meu nome é %s e meu nome tem várias letras %c\n",palavra,letra);

	return 0;

}
