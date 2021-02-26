#include <stdio.h>
#include <stdlib.h>

int main(){
	//Caso usemos break em alguma condição que seja satisfeita, nosso programa não passará por default
	
	printf("Digite um valor entre 0 e 9: ");
	int i ;
	scanf("%d",&i);
	switch(i){
	case 0:
		printf("A opção digitada foi zero.\n");
		break;
	case 1:
		printf("A opção digitada foi um.\n");
		break;
	case 2:
		printf("A opção digitada foi dois.\n");
		break;
	case 3:
		printf("A opção digitada foi três.\n");
		break;
	case 4:
		printf("A opção digitada foi quatro.\n");
		break;
	case 5:
		printf("A opção digitada foi cinco.\n");
		break;
	case 6:
		printf("A opção digitada foi seis.\n");
		break;
	case 7:
		printf("A opção digitada foi sete.\n");
		break;
	case 8:
		printf("A opção digitada foi oito.\n");
		break;
	case 9:
		printf("A opção digitada foi nove.\n");
		break;

	default:
		//Não há necessidade de colocarmos um break 
		printf("Opção defalt.\n");
	}

	return 0;
}
