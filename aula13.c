#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Digite o número 1: ");
	char c;
	c = getchar(); // a diferença entre a função getchar() e a scanf é que a getchar só vai ler um caractere
	if(c == '1'){
		printf("O caractere digitado está correto.\n");
	}else{
		printf("O valor digitado é inválido.\n");
		printf("Você digitou o caracter %c\n",c);
	}

	return 0;
}
