#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int num1,num2,soma,sub,mult,div;
	
	printf("Calculadora 1.0\n");
	printf("Entre os dois números a serem processados: ");

	scanf("%i %i",&num1,&num2);
	soma = num1 + num2;	
	sub = num1 - num2;
	mult = num1 *  num2;
	div = num1/num2;
	
	printf("A soma é %i\n",soma);
	printf("A subtração é %i\n",sub);
	printf("A multiplicação é %i\n",mult);
	printf("A divisão é %i\n",div);
	return 0;
}
