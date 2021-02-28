#include <stdio.h>
#include <stdlib.h>
int main(){

	int n,i;
	printf("Digite um número: ");
	scanf("%i",&n);

	int vetor[n];
	vetor[0] = 0;
	vetor[1] = 1;

	for(int i = 2; i<n; ++i){
		vetor[i] = vetor[i-2] + vetor[i-1];
	}

	for(int i = 0; i<n; ++i){
		printf("%i  ",vetor[i] );
	}
	printf("\n");

	int fibonacci(int n){

		if(n == 0){
			return 0;
		}
		 if(n == 1){
			return 1;
		}
		else{			
		 return vetor[n-1];	
		}
	}
	
	printf("%i\n", fibonacci(n));
	
	return 0;
}

/*
0
1
1 = 0+1
2 = 1+1
3 = 2+1
5 = 3+2
8 = 5+3

*/