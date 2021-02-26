#include <stdio.h>
#include <stdlib.h>
int main(){
	
	for(int x = 0; x<=10; ++x){

		if(x==2){
			printf("-\n");
			continue;
		}
		
		if(x==8){
			printf("%i\n",x);
			break;
		}
		
		printf("%i\n",x);

	}

	return 0;
}
