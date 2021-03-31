#include <stdio.h>
#include <stdlib.h>

int main(){

	struct horario
	{	
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};

	struct horario hoje;

	//como definir o valor de membros ponteiros de uma struct
	int hora = 200;
	int minuto = 300;
	int segundo = 400;

	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;

	//como acessar o valor de um membro ponteiro

	printf("%d:%d:%d\n", *hoje.pHora,*hoje.pMinuto, *hoje.pSegundo );


	return 0;
}