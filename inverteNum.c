#include <stdio.h>
#include <stdlib.h>

int main(){

	char n[1000];
	printf("Digite um número: \n");
	scanf("%s",&n);
	
	int count = 0;

	for(int i = 0; 1==1 ; i++){
		if(n[i] == '\0')
			break;
		else
			count+=1;

	}

	int k = n[0];
	n[0] = n[count-1];
	n[count-1] = k;

	for(int i = 1; i<count/2; ++i){
		k = n[i];
		n[i] = n[(count-1)-i];
		n[(count-1)-i] = k;
	} 

	for(int j = 0; j<count; ++j){
		printf("%c",n[j] );
	}

	printf("\n");
	
	return 0;
}