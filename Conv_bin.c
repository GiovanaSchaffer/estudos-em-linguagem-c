#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	typedef struct BigInt{
		unsigned char x[128];
	}BigInt;


	BigInt neg( BigInt a);


	BigInt add( BigInt a, BigInt b);

	BigInt sub( BigInt a, BigInt b){
		return add(a, neg(b));
	}

	BigInt mul( BigInt a, BigInt b);

	BigInt shr( BigInt a, int n);

	BigInt shr( BigInt a, int n);

	void print( BigInt a);

	BigInt init( char *str);

	*/
	int num_entrada; 
	int tamanho;
	int bin2[128];
	printf("Digite um número em decimal: ");
	scanf("%d", &num_entrada);

	int Binario( int num_entrada){
		int bin[128];
		int bin2[128];
		int i,j = 0;
		int resto = 1;
		int tamanho = 0;
		while(resto!=0){
			while(num_entrada!=0){
				resto = num_entrada%2;
				bin[i] = resto;
				num_entrada = num_entrada/2;
				++tamanho;
				++i;
			}
			resto = num_entrada%2;
			bin[i] = resto;
			++i;
			++tamanho;
		}
		
		for(int i = tamanho-1; i>=0; --i){
			bin2[j] = bin[i];
			++j;
		}

		for(int i = 0; i<tamanho; ++i){
			printf("%d ", bin2[i] );
		}printf("\n");

		return bin2[128],tamanho;
	}
 	
	*bin2,tamanho= Binario(num_entrada);
	
	
	printf("%d\n",tamanho );


	return 0;
}


