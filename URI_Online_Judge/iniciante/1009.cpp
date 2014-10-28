#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
	char nome;
	double salario, totalVenda, comissao;

	scanf("%s", &nome);
	cin >> salario;
	cin >> totalVenda;
	
	comissao = salario+(0.15*totalVenda);
	
	printf("TOTAL = R$ %.2f\n",comissao);
}
