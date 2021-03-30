#include <stdio.h>
#include <stdlib.h>
int main(){

	struct ficha_de_aluno
	{
		char nome[50];
		char disciplina[50];
		float nota_prova1;
		float nota_prova2;
	};

	struct ficha_de_aluno aluno;

	printf("\n----------Cadastro de aluno----------\n\n\n");

	printf("Nome do aluno-----: ");
	scanf("%s", aluno.nome);
	printf("Nome da disciplina-----: ");
	scanf("%s", aluno.disciplina);

	printf("Informe a nota da prova 1: ");
	scanf("%f", &aluno.nota_prova1);
	printf("Informe a nota da prova 2: ");
	scanf("%f", &aluno.nota_prova2);

	printf("\n\n---------Lendo os dados da struct----------\n\n");
	printf("Nome..........: %s\n", aluno.nome );
	printf("Disciplina..........%s\n", aluno.disciplina);
	printf("Nota da prova 1..........: %.2f\n", aluno.nota_prova1);
	printf("Nota da prova 2..........: %.2f\n", aluno.nota_prova2);

	return 0;
}