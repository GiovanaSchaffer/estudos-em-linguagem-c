#include <stdio.h>
#include <stdlib.h> //para alocação dinamica

struct x
{
	int a;
	int b;
	int c;
};

int main(){

	struct x estrutura; //12 bytes

	int x; //4 bytes
	double y; //8 bytes
	int vetor[10]; //40 bytes

	printf("%ld\n", sizeof(estrutura));

	return 0;
}