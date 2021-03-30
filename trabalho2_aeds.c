#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetor_srand(int *vetor_inic, int n){
	srand(time(NULL));
	for(int i = 0; i< n; i++){
		vetor_inic[i] = rand() % 100;
	}
}

void apresenta_vetor(int *vetor, int tamanho_vetor){
	for (int i = 1; i <= tamanho_vetor; i++) {
    	printf("%i ", vetor[i]);
  	}
  	printf("\n");
}

void sobeHeap_max(int *vetor, int k){
	int t = vetor[k];
	vetor[0] = t;
	while(vetor[(k/2)] < t){
		vetor[k] = vetor[(k/2)];
		k = (k/2);
		if(k/2 == 0)
			break;
	}

	vetor[k] = t;
}

void sobeHeap_min (int *vetor, int k){

  	int t = vetor[k];
  	vetor[0] = t;

  	while (t < vetor[(k/2)]) {
    	vetor[k] = vetor[(k/2)];
    	k = (k/2);
    	if (k/2 == 0)
      		break;   	
  	}

  	vetor[k] = t;
}

void desceHeap_max(int *vetor, int k, int m){// m = tam vetor,
	int t = vetor[k];
	int x = (k<=(m/2));
	int j;

	while(x){
		j = 2*k;
		if((j<m) && (vetor[j] < vetor[j+1]))
			j++;
		
		if( t < vetor[j] ){
			vetor[k] = vetor[j];
			k = j;
			x = (k<=(m/2));
		}
		else
			x = 0;
	}
	vetor[k] = t;
}

void desceHeap_min (int *vetor, int k, int m) {
  	int t = vetor[k];
	int x = (k<=(m/2));
  	int j;

	while (x) {
		j = 2*k;

    	if ((j < m) && (vetor[j] > vetor[j+1])) 
    		j++;
    	
    	if (t > vetor[j]) {
      		vetor[k] = vetor[j];
      		k = j;
			x = (k<=(m/2));

    	} 
    	else 
      		x = 0;
  	}

  	vetor[k] = t;
}


void constroiHeap_max(int *vetor, int tamanho_vetor){
	int pai;

	for (int i = 2; i <= tamanho_vetor; i++) {
		pai = i/2;

    	if (vetor[i] > vetor[pai]) 
      		sobeHeap_max(vetor, i);   	
  	}
}
void constroiHeap_min(int *vetor, int tamanho_vetor){
	int pai;

  	for (int i = 2; i <= tamanho_vetor; i++) {
    	pai = i/2;

    	if (vetor[i] < vetor[pai]) 
      		sobeHeap_min(vetor, i);    	
  	}
}

void heapSort_max(int *vetor, int tamanho_vetor){
	int t;
  	int contador = 1;
  	int tamanho = tamanho_vetor;

  	for (int i = tamanho_vetor; i >= 2; --i) {
    	t = vetor[i];
    	vetor[i] = vetor[1];
    	vetor[1] = t;
    	tamanho_vetor --;

    	desceHeap_max(vetor, 1, tamanho_vetor);

    	printf("Passo %i: ", contador);

    	apresenta_vetor(vetor, tamanho);

    	printf("\n");

    	contador++;
  	}
}

void heapSort_min(int *vetor, int tamanho_vetor){

	int t;
	int contador = 1;
	int tamanho = tamanho_vetor;

	for (int i = tamanho_vetor; i >= 2; --i) {
		t = vetor[i];
    	vetor[i] = vetor[1];
    	vetor[1] = t;
    	tamanho_vetor--;
    	desceHeap_min(vetor, 1, tamanho_vetor);

    	printf("Passo %i: ", contador);

    	apresenta_vetor(vetor, tamanho);

    	contador++;
  	}
}

void inserir_max(int *vetor, int m, int valor){
  	m ++;
  	vetor[m] = valor;

  	sobeHeap_max(vetor, m);

	apresenta_vetor(vetor, m);
}

void inserir_min(int *vetor, int m, int valor){
  	m ++;
  	vetor[m] = valor;

  	sobeHeap_min(vetor, m);

	apresenta_vetor(vetor, m);
}

void remove_posicao(int *vetor, int m){

  int posicao;

  printf("Qual posição você deseja deletar?\n");
  scanf("%d", &posicao);

  if (posicao > m || posicao < 1) 
    printf("Posição do vetor inexistente.\n");
  
  else {
    int t = vetor[m];
    vetor[posicao] = t;
    m--;

    if (vetor[posicao] < vetor[1]) 
      desceHeap_max(vetor, posicao, m);
    else 
      desceHeap_min(vetor, posicao, m);    
  }

  apresenta_vetor(vetor, m);

}

void prioridade(int *vetor, int m){

	int posicao, prioridade;

	printf("Qual a posição deseja alterar? \n");
	scanf("%d", &posicao);
	printf("Qual será a prioridade? \n");
	scanf("%d", &prioridade);

	int pai;
	pai = posicao/2;

	if (posicao > m || posicao < 1) 
		printf("Posição do vetor inexistente.\n");

	else if (vetor[m] < vetor[1]) {
		vetor[posicao] = prioridade;
	    if (posicao == 1)
	    	desceHeap_max(vetor, posicao, m);
	    
	    else if (prioridade < vetor[pai]) 
	    	desceHeap_max(vetor, posicao, m);

	    else 
	      sobeHeap_max(vetor, posicao);
	}  
	else {
	    vetor[posicao] = prioridade;
	    if (posicao == 1) 
	    	desceHeap_min(vetor, posicao, m);
	     
	    else if (prioridade < vetor[pai]) 
	    	sobeHeap_min(vetor, posicao);
	    
	    else 
	    	desceHeap_min(vetor, posicao, m);   
	}
	apresenta_vetor(vetor, m);
}

int main(){
	int n;
	int num;
	printf("Qual será o tamanho do seu vetor: \n");
	scanf("%d", &n);
	int vetor_inic[1000];
	vetor_srand(vetor_inic,n);
	int vetor[1000];

	int valor;
	
	for(int i = 0; i<n; i++){
		vetor[i] = vetor_inic[i];
	}

	printf("\n");
	int escolha1 = 1;
	int escolha2 = 1;
	int opc;

	while(escolha1){
		printf("Escolha o que você deseja criar: \n");
	    printf("(1) Heap de máximo\n(2) Heap de mínimo\n(3) Sair do programa\n\n");
	    scanf("%d", &opc);

	    switch(opc){
	    	case 1:
	    		constroiHeap_max(vetor, n);
	   
	    		while(escolha2 != 6){
					printf("-------------------- MENU --------------------\n\n");

					printf("Escolha uma das opções abaixo:\n\n");

				    printf("(1) Mostrar heap criado\n(2) Ordenar o vetor\n(3) Inserir novo elemento no heap\n");
				    printf("(4) Remover um elemento do heap\n(5) Alterar prioridade de um elemento\n(6) Sair do programa\n");

					scanf("%d", &escolha2);
					//system("clear");
					switch(escolha2){
						case 1:
							apresenta_vetor(vetor, n);
							break;
							
						case 2:
							heapSort_max(vetor,n);
							break;
						case 3:
							valor = rand() % 100;
						    inserir_max(vetor, n, valor);
						    n += 1;
						    break;
						case 4:
							remove_posicao(vetor, n);
      						n -= 1;
      						break;
      					case 5:
      						prioridade(vetor, n);
      						break;
      				}					
				}
				if(escolha2 == 6){
					printf("Você escolheu sair :(\n");
				}
				escolha1 = 0;
				break;
	    		
	    	case 2:
	    		constroiHeap_min(vetor,n);

	    		while(escolha2 != 6){
					printf("-------------------- MENU --------------------\n\n");

					printf("Escolha uma das opções abaixo:\n\n");

				    printf("(1) Mostrar heap criado\n(2) Ordenar o vetor\n(3) Inserir novo elemento no heap\n");
				    printf("(4) Remover um elemento do heap\n(5) Alterar prioridade de um elemento\n(6) Sair do programa\n");

					scanf("%d", &escolha2);
					//system("clear");
					switch(escolha2){
						case 1:
							apresenta_vetor(vetor, n);
							break;
							
						case 2:
							heapSort_min(vetor,n);
							break;
						case 3:
							inserir_min(vetor, n, valor);
						    n += 1;
						    break;
						case 4:
							remove_posicao(vetor, n);
      						n -= 1;
      						break;
      					case 5:
      						prioridade(vetor, n);
      						break;
					}
				}
				if(escolha2 == 6){
					printf("Você escolheu sair :(\n");
				}
				escolha1 = 0;
				break;
			case 3:
				printf("Programa finalizado.\n");
				escolha1 = 0;
				break;
	    	default:
	    		printf("erro.\n");
	    }
	    printf("\n");
	}

	return 0;
}