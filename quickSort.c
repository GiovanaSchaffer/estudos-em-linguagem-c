#include <stdio.h>
#include <stdlib.h>

int main(){

	int tamanho;
	char palavra[100];

	printf("Digite sua palavra para ordenarmos: \n");
	scanf("%s", palavra);

	printf("\n");

	for(int i = 0; palavra[i] != '\0'; ++i){
		tamanho = i;
	}tamanho++;

	printf("%d\n",tamanho);

	int esq = 0;
	int dir = tamanho-1;
	int pivo;

	int particao(char *palavra, int esq, int dir){
		//esq = 0 e dir = 1 , esq = 1, dir = 10
		int i = esq;
		int j = dir;
		char k;
		//pivo = (0+1)/2 = 0 -> pivo = 0
		char pivo = palavra[(esq+dir)/2]; //pivo = (1+10)/2 = 5
		//printf("O seu pivo é %c\n",pivo );
		while(i<=j){
			while(palavra[i] < pivo)
				++i;
			while(palavra[j] > pivo)
				--j;

			if(i<j){
				k = palavra[i];
				palavra[i] = palavra[j];
				palavra[j] = k;
			}
			else
				break;
		}
		return j;

	}

	int quickSort(char *palavra,int esq,int dir){
		//esq = 0 e dir = 1-> esq = 1, dir = 10;
		if(esq<dir){
			pivo = particao(palavra, esq, dir); //j = 1-> pivo = 1
			quickSort(palavra, esq, pivo); //(palavra,0,1), pivo,i,j = 0
			quickSort(palavra, pivo+1, dir);//(palavra,1,10)
		}else
			return printf("%s\n",palavra);
	}

	quickSort(palavra,esq,dir);

	return 0;
}

/* P R I M O G E N I T O



E G I I M N O 0 P R T

0 1 2 3 4 5 6 7 8 9 10
P R I M O G E N I T O

pivo = (0+10)/2 = 5 -> G

0 1 2 3 4  5  6 7 8 9 10
P R I M O |G| E N I T O
|P| R I M O G |E| N I T O //i = 0 e j = 6

0  1  2 3 4  5  6 7 8 9 10
E |R| I M O |G| P N I T O  //i = 1 e j = 5

0  1  2 3 4  5  6 7 8 9 10
E |G| I M O  R  P N I T O   //i = 1 e j = 1

0  1  2 3 4 5 6 7 8 9 10  //
E |G| I M O R P N I T O   // i = 1 e j = 1

 0   1  2 3 4 5 6 7 8 9 10
|E|  G  I M O R P N I T O // pivo = 0; i = 0; j = 0
----------------------------------------------------

0 1 2 3 4  5  6 7 8 9 10      //i = 1 e j = 10
E G I M O |R| P N I T O     //i = 4 e j = 10 











*/