#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
	int ddd;
	//memoria alocado de bobeira, por preguiça forcei um acesso randômico
	char estados[100][30];
	strcpy(estados[71],"Salvador");
	strcpy(estados[61],"Brasilia");
	strcpy(estados[11],"Sao Paulo");
	strcpy(estados[21],"Rio de Janeiro");
	strcpy(estados[32],"Juiz de Fora");
	strcpy(estados[19],"Campinas");
	strcpy(estados[27],"Vitoria");
	strcpy(estados[31],"Belo Horizonte");
	
	while(scanf("%d", &ddd)==1){
		printf("%s\n",estados[ddd]);
	}
}
