#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){

	double num1,num2,resultado;
	char op = '0';

	do{
		num1 = num2 = resultado = 0;//resetando as variáveis
		printf("(1) Somar\n");
		printf("(2) Subtrair\n");
		printf("(3) Multiplicar\n");
		printf("(4) Dividir\n");

		printf("Informe a operação: \n");
		op = getchar();
		
		printf("Digite o primeiro número: \n\t");
		scanf("%lf",&num1);
		printf("Digite o segundo número: \n\t");
		scanf("%lf",&num2);
	}while(op=='0');

	return 0;
}
