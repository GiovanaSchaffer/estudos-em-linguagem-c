#include <stdio.h>
#include <stdlib.h>

void copiarString(char *copiarDaqui, char *colarAqui){
	while(*copiarDaqui != '\0'){
		*colarAqui = *copiarDaqui;
		++copiarDaqui;
		++colarAqui;
	}
}

int main(){

	char string1[] = "pao com mortadela";
	char string2[20];

	copiarString(string1, string2);
	for(int i = 0; string1[i] != '\0'; i++){
		printf("%c",string2[i]);
	}
	printf("\n");
	
	return 0;
}