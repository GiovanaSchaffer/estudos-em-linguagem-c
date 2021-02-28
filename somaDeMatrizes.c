#include <stdio.h>
int main(){
	int n;
	printf("Digite a ordem da matriz(nxn): ");
	scanf("%i",&n);

	printf("Primeira matriz: \n\n");

	int matriz[n][n];
	for(int i = 0; i<n ; ++i){
		for(int j = 0; j<n ; ++j){
			printf("Digite um valor para a matriz[%i][%i]: \n",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}

	system("clear");

	int matriz2[n][n];

	printf("Segunda matriz: \n\n");
	for(int i = 0; i<n ; ++i){
		for(int j = 0; j<n ; ++j){
			printf("Digite um valor para a matriz[%i][%i]: \n",i+1,j+1);
			scanf("%i",&matriz2[i][j]);
		}
	}

	printf("Matriz soma: \n\n");

	int matriz_soma[n][n];

	for(int i = 0; i<n; ++i){
		for(int j = 0; j<n; ++j){
			matriz_soma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}

	system("clear");
	
	printf("A matriz soma ficou: \n\n");
	for(int i = 0; i<n ; ++i){
		for(int j = 0; j<n ; ++j){
			printf("%i ",matriz_soma[i][j]);
		}

		printf("\n");
	}
	/*

	printf("\n\n\n");

	for(int i = 0; i<n ; ++i){
		for(int j = 0; j<n ; ++j){
			printf("%i ",matriz2[i][j]);
		}

		printf("\n");
	}

	*/

	return 0;
}

/*			Coluna j
linha i		[0] [1] [2]
			[3] [4] [5]
			[6] [7] [8]
*/