#include <stdio.h>
#include <stdio.h>

int main(){
	
	int x = 10;

	printf("%d\n",x)
;
	int *ponteiro; //ponteiro apontado para um valor inteiro
	//ponteiros sempre apontam para endereços de memoria
	ponteiro = &x; 

	printf("%d\n", *ponteiro);
	printf("%d\n", ponteiro );

	// ponteiro = endereço de memoria
	//*ponteiro = valor armazenado no endereço de memoria
	
	// como acessamos o endereço de memoria da variável x?

	printf("%d\n", &x);

	int y = 20;
	int z = y;
	y = 30;

	printf("y = %d z = %d\n", y,z); //y = 30 e z = 20
	// isso acontece pq z não está relacionado com o endereço d
	// de memoria onde foi armazenado y

	// veja como isso poderia funcionar

	y = 20;
	int *p = &y; //o ponteiro z vai apontar para o endereço 
	// de memoria da variável y.

	y = 45;

	printf("y = %d p = %d\n",y, *p);
	return 0;
}