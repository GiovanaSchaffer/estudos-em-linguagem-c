#include <stdio.h>
#include <stdlib.h>

int main(){

	struct horario{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	//variavel do tipo horario chamada agora
	// ponteiro que aponta para estruturas do tipo horario;

	depois = &agora; // meu ponteiro depois vai apontar para o 
	//endereço da variável agora que é do tipo struct.

 	depois->hora = 12;
 	depois->minuto = 43;
 	depois->segundo = 20;
	
	/*
 	Também poderiamos declarar assim:

	(*depois).hora = 12;
	(*depois).minuto = 43;
	(*depois).segundo= 12;
	*/

	int somatorio = 100;

	struct horario antes;

	antes.hora = somatorio + depois->segundo;
	antes.minuto = agora.hora + depois->minuto;
	antes.segundo = antes.hora + antes.minuto - depois->segundo;

	printf("%d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);
	printf("%d:%d:%d\n", antes.hora, antes.minuto, antes.segundo);


	return 0;
}