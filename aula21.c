#include <stdio.h>
#include <stdlib.h>
int main(){
	int num,num2;

	printf("Informe um número: ");
	scanf("%d",&num);
	/*
	if(num<0)
		num2 = 0;
	else
		num2 = num;
	*/
	
	num2 = (num < 0) ? 0 : num;
	printf("O valor de num2 é: %d\n",num2);

	return 0;
}
