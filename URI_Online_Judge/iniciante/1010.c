#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
	int qtd,cod;
	float valor,valorAPagar = 0.00;

	while (scanf("%d %d %f", &cod, &qtd, &valor) == 3){
		valorAPagar += qtd*valor; 
		
	}	
	printf("VALOR A PAGAR: R$ %.2f\n",valorAPagar);	
}
