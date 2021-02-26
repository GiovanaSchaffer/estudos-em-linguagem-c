#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	char c;
	printf("Digite um caracter em letra minúscula: ");
	scanf("%c", &c);

	if(c>= 'a'){
	
		printf("Segue a letra que você digitou em maiúscula: %c\n",toupper(c));
	}

	return 0;
}
