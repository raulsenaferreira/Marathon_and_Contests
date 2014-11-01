#include<stdio.h>
// Deve ter lib que passando apenas um número ele retorna o mês correspondente
// mas hoje meu tempo está curto, vou fazer logo da maneira braçal mesmo
int main(int argc, char *argv[]){
	int m;
	char *vetMes[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	scanf("%d", &m);
	
	printf("%s\n", vetMes[m-1]);
	
	return 0;
}
