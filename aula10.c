#include <stdio.h>
#include <stdlib.h>

int main(){

	int iJ,iI;
	iJ = 17;
	iI = 60;
	int idade = 0;
	printf("Digite a idade de uma pessoa: ");
	scanf("%i",&idade);

	if(idade<=iJ){
	
		printf("A idade informada é de um jovem.\n");
	
	}else{
		if(idade>=iI){
			printf("A idade informada é de uma pessoa idosa.\n");	
		}else{
			if((idade>iJ)&&(idade<iI)){
				printf("A idade informada é de uma pessoa adulta.\n");
			}
		}

	}

	return 0;
}

