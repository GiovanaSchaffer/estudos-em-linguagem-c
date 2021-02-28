#include <stdio.h>
#include <stdlib.h>

int main(){

	int num;
	printf("Digite um número: ");
	scanf("%i",&num);

	int fatorial(int num){

		if(num == 0){
			return 1;
		}
		else{
			int fat = num * fatorial(num-1);
			return fat;
		}
	}	

	printf("O fatorial de %i é %i\n",num,fatorial(num));


	return 0;
}