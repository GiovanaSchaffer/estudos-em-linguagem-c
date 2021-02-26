#include <stdio.h>
#include <stdlib.h>
#define w 6
int main(){
	//existem duas formas de definir uma constante, ou com const tipo nome = valor ou com #define nome valor.
	const int a = 5;
	printf("%i\n",a);
	printf("%i\n",w);
	printf("%i\n",a+w);

	return 0;
}
