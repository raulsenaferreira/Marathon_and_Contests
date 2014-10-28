#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int i, jogos;
	int resultado;
	
	while (scanf("%d", &jogos)==1){
		
		if(jogos != 0){
			int mary = 0;
			int john = 0;
			
			for(i = 0; i < jogos; i++){
				scanf("%d", &resultado);
				
				if(resultado == 0){
					mary++;
				}
				else if(resultado == 1){
					john++;
				}
			}
			
			printf("Mary won %d times and John won %d times\n", mary, john);
		}
		else{
			return 0;
		}
	}
}
