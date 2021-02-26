#include <stdio.h>
#include <stdlib.h>

int main(){

	double num1,num2,resultado;
	int op = 0;

	do{
		num1 = num2 = resultado = 0;//resetando as variáveis
		printf("(1) Somar\n");
		printf("(2) Subtrair\n");
		printf("(3) Multiplicar\n");
		printf("(4) Dividir\n");
		printf("(0) Sair do programa\n");

		printf("Informe a operação: \n");
		scanf("%d",&op);

		printf("\n");
		
		if(op!= 0){
			printf("Digite o primeiro número: \n\t");
			scanf("%lf",&num1);
			printf("Digite o segundo número: \n\t");
			scanf("%lf",&num2);
			
			if(op == 1){
				resultado = num1+num2;
			}
			
			else if(op == 2){
				resultado = num1-num2;

			}

			else if(op == 3){
				resultado = num1*num2;
			}
			
			else if(op == 4){
				resultado = num1/num2;
			}

		printf("Resultado = %lf\n",resultado);

		//system("pause"); parar o programa
		//system("cls");   limpar a tela

		}
	}while(op!= 0);

	return 0;
}
