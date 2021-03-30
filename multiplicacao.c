#include <stdio.h>
#include <stdlib.h>
#include <string.h>    

int main(){
    char a[] = "12";
    char b[] = "111";
    
    int tamanho_a= strlen(a);
    int tamanho_b= strlen(b);
    
    //printf("%d\n",tamanho_a);
    //printf("%d\n",tamanho_b);

    int resultado = 0;
    int q = 0;
    int s;
    int k = 0;

    for(int i= tamanho_b-1; i>=0; i--,k++){
        //printf("%d\n",i);
        int carry = 0;
        q = 0;
        int soma = 0;
        int contador = 0;
        int contador2 = 0;
        int potencia = 1;
        int potencia2 = 1;     
        
        for(int j= tamanho_a-1; j>=0; j--){
            //printf("%d\n",j );
            int num1= a[j] - '0'; 
            //printf("%d\n", num1 );
            int num2= b[i] - '0';
            //printf("%d\n",num2);
            int z= num1*num2 + carry;
            //printf("%d\n",z );
            
            if(z>9){
                carry = (num1*num2)/10;
                q = (num1*num2)%10;
                if(soma == 0){
                    potencia = 1;
                    soma++;
                    //printf("%d\n",potencia);
                }
                else{
                    for(contador; contador!=soma; contador++){
                        potencia = potencia * 10;
                        //printf("%d\n", potencia );
                    }
                    soma++;
                }
                q+= z*potencia;
            }
            if(z<=9){
                if(soma == 0){
                    potencia = 1;
                    soma++;
                    //printf("%d\n",potencia );
                }
                else{
                    for(contador; contador!=soma; contador++){
                        potencia = potencia * 10;
                    }
                    //printf("%d\n", potencia );
                    soma++;
                }
                //printf("%d\n",z);
                q+= z * potencia;
                //printf("%d\n",q);
            }
        }    
        s = q;
        //printf("%d\n",s );

        if(k==0){
            potencia2 = 1;
            //printf("%d\n",potencia2);
            resultado += s * potencia2;
            //printf("Seu resultado foi: %d \n",resultado);
        }
        else{
            for(contador2; contador2 != k; contador2++){
                potencia2 = potencia2 * 10;
            }
            //printf("%d\n", potencia2 );
            resultado += s * potencia2;
            //printf("Seu resultado foi: %d \n",resultado);
        }    
    } 
    printf("Seu resultado foi: %d \n",resultado);

    return 0;
}