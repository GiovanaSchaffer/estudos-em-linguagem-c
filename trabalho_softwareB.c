#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BigInt{
        unsigned char x[128];
    }BigInt;

BigInt add(BigInt a, BigInt b){
    BigInt c;
    int carry = 0;
    for(int i=0; i<128; i++){
        c.x[i] = (a.x[i] + b.x[i]) + carry;
        if (a.x[i]+b.x[i]>=256)
            carry=1;
        else
            carry=0;   
    }
    return c;
}
 
BigInt neg( BigInt v){
    BigInt r;

    for(int i=0; i<128; i++){
        r.x[i] = ~v.x[i]; 
    }
    BigInt um;
    for(int i=0;i<128;i++){
        um.x[i] = 0;
    }
    um.x[0]=1;
    r= add( r, um);
    return r;
 }
   

BigInt sub(BigInt a, BigInt b){
    return add(a,neg(b));

}

BigInt mul(BigInt a, BigInt b){
    int resultado = 0;
    int q = 0;
    int s;
    int k = -1;

    for(int i= 128-1; i>=0; i--){
        //printf("%d\n",i);
        int carry = 0;
        q = 0;
        int soma = 0;
        int contador = 0;
        int contador2 = 0;
        int potencia = 0;
        int potencia2 = 1;     
        
        for(int j= 128-1; j>=0; j--){
            //printf("%d\n",j );
            int num1= a.x[j]; 
            //printf("%d\n", num1 );
            int num2= b.x[i];
            //printf("%d\n",num2);
            int z= num1*num2 + carry;
            //printf("%d\n",z );
            
            if(z>9 && i>0 && (num1 && num2 != 0)){
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
            if(z<=9 && (num1 && num2 != 0)){
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
        if(s!=0){
            k++;
            if(k==0){
                potencia2 = 1;
                //printf("%d\n",potencia2);
                resultado += s * potencia2;
                //printf("Seu resultado foi: %d \n",resultado);
            }
            else if(k!=0){
                for(contador2; contador2 != k; contador2++){
                    potencia2 = potencia2 * 10;
                }
                //printf("%d\n", potencia2 );
                resultado += s * potencia2;
                //printf("Seu resultado foi: %d \n",resultado);
            }   
        }
    } 
    //printf("Seu resultado foi: %d \n",resultado);
    BigInt resposta;
    char sres[128];
    sprintf(sres,"%i",resultado);
    int inicio = 128 - strlen(sres);
    int count = 0;
    for(int i = 0; i<128; i++){
        if(i>=inicio){
            resposta.x[i] = sres[count] - '0';
            //printf("%d\n",resposta.x[i] );
            count++;
        }
        else{
            resposta.x[i] = 0;
            //printf("%d\n",resposta.x[i] );
        }
    }

    return resposta;
}

BigInt init(char *strnum){
    BigInt r; // inicializar zerado
    int inicio = 128-strlen(strnum);
    int cont  = 0;
    for(int i = 0; i<128; i++){
        if(i>=inicio){
            r.x[i] = strnum[cont] - '0';
            cont++;            
        }
        else
            r.x[i] = 0;
    }
    return r;    
}

BigInt shl(BigInt a, int n){
    BigInt shift;
    int tamanho_zeros = 0;
    int num[128];
    int cont = 0;
    int k = -1;
    for(int i = 0; i<128; i++){
        if(a.x[i] == 0){
            if(k==-1)
                tamanho_zeros++;
            else{
                num[cont] = a.x[i];
                //printf("%d",num[cont]);
                cont++;
            }
        }
        else{
            k = 1;
            num[cont] = a.x[i];
            //printf("%d",num[cont]);
            cont++; 
        }
    }
    int r = 0; 
    for(int i = 0; i<128-tamanho_zeros; i++){
        r*=10;
        r+=num[i];
    }
    //printf("%d\n",r );

    
    int res_exp = 1;
    
    for(int i = 0; i<=n; i++){
        if(i == 0){
            res_exp = 1;
        }
        else{
            res_exp*=2;
        }
    }
    //printf("%d\n",res_exp );
    int shiftl_num = r*res_exp;
    //printf("%d\n",shiftl_num );
    char sShift[128];
    sprintf(sShift,"%i",shiftl_num);

    int inicio = 128 - strlen(sShift);
    int cont2 = 0;
    for(int i = 0; i<128; ++i){
        if(i<inicio){
            shift.x[i] = 0;
        }
        else{
            shift.x[i] = sShift[cont2] - '0';
            cont2++;
        }
    }
    return shift;
}

BigInt shr(BigInt a, int n){
    BigInt shift;
    int tamanho_zeros = 0;
    int num[128];
    int cont = 0;
    int k = -1;
    for(int i = 0; i<128; i++){
        if(a.x[i] == 0){
            if(k==-1)
                tamanho_zeros++;
            else{
                num[cont] = a.x[i];
                //printf("%d",num[cont]);
                cont++;
            }
        }
        else{
            k = 1;
            num[cont] = a.x[i];
            //printf("%d",num[cont]);
            cont++; 
        }
    }
    int r = 0; 
    for(int i = 0; i<128-tamanho_zeros; i++){
        r*=10;
        r+=num[i];
    }
    //printf("%d\n",r );

    
    int res_exp = 1;
    
    for(int i = 0; i<=n; i++){
        if(i == 0){
            res_exp = 1;
        }
        else{
            res_exp*=2;
        }
    }
    //printf("%d\n",res_exp );
    int shiftr_num = r/res_exp;
    //printf("%d\n",shiftl_num );
    char sShift[128];
    sprintf(sShift,"%i",shiftr_num);

    int inicio = 128 - strlen(sShift);
    int cont2 = 0;
    for(int i = 0; i<128; ++i){
        if(i<inicio){
            shift.x[i] = 0;
            printf("%d\n",shift.x[i] );
        }
        else{
            shift.x[i] = sShift[cont2] - '0';
            printf("%d\n",shift.x[i] );
            cont2++;
        }
    }
    return shift;
}

void print(BigInt a){
    int tamanho_zeros = 0;
    for(int i = 0;a.x[i] == 0; i++){
        tamanho_zeros++;
    }

    for(int i = tamanho_zeros; i<128; i++){
        printf("%d",a.x[i] );
    }printf("\n");
}


int main(){
    /*
    BigInt a = init("");
    BigInt b = init("");
    Bigint c;
    
    for(int i = 0; i<128; i++){
        printf("%d",c.x[i]);
    }printf("\n");
    */
    return 0;
}
