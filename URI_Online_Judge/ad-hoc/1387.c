#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int filha, filho, resultado;
	
	while (scanf("%d %d", &filho, &filha)==2){
		
		if(filho == 0 && filha == 0){
			return 0;
		}
		else{
			resultado = filho+filha;
			
			printf("%d\n", resultado);
			
		}
	}
}
