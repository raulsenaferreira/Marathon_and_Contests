#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int numFuncionario,qtdHorasTrab;
	float salario, valorHoraTrab;

	scanf("%d", &numFuncionario);
	scanf("%d", &qtdHorasTrab);
	scanf("%f", &valorHoraTrab);
	
	salario = valorHoraTrab*qtdHorasTrab;
	
	printf("NUMBER = %d\n",numFuncionario);
	printf("SALARY = U$ %.2f\n",salario);
}
