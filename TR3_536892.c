#include <stdio.h>
#include <stdlib.h>

int main(){
   
   	unsigned int vetor[200]; 
   	int save_valor = 0, local_vetor, local_valor;

   	//#########################

   	for( int zerar_vetor = 0 ; zerar_vetor <= 200; zerar_vetor++){	//armazenar 0 no vetor
   		vetor[zerar_vetor] = 0;
   	}
   	
   	printf("Esse programa imprime em ordem crescente os numeros digitados (sem repeticoes e no intervalo a seguir).\n");
   	
   	while ( save_valor != -1){ 					 //quando o usuario digitar -1, imprime o resultado
   	
   		printf( "\nDigite um numero de 0 a 5000.\n(Para obter o resultado digite -1):" );
   		scanf( "%d",& save_valor);
   		
   		if( save_valor >= 0 && save_valor <= 5000){		//filtrar os valores de entrada e armazenar no vetor
   		
   			local_vetor = save_valor / 32;	// indice do vetor
   			local_valor = save_valor % 32;	// o tanto que ira deslocar para a esquerda o bit de 1
   			vetor[local_vetor] = vetor[local_vetor] | 1 << local_valor; 
   		}
   	}
   	
   	printf("\n");
   	printf("A ordem crescente dos numeros digitados e:\n");
   	
   	for( int imprimir_valor = 0; imprimir_valor <= 5000; imprimir_valor++){		//extrair o numero do vetor 
   	
   		int local_vetor = imprimir_valor / 32;
   		int local_valor = imprimir_valor % 32;
   		
   		if( (1 << local_valor) & vetor[local_vetor]){
   			printf("%i; ", imprimir_valor);
   		}
   	}
   	
   	printf("\n");
   	
   	//#########################
   
	return 0;  
}
