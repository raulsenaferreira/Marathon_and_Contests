#include<iostream>
//no final tem uma versão compacta com 1 terço das linhas :P
using namespace std;

int main(int argc, char *argv[]){
	double N;
	int valor = 0;

	cin >> N;
	cout << "NOTAS:\n";
	
	while(N>=100){
		N-=100;
		valor++;
	}
	
	cout << valor <<" nota(s) de R$ 100.00\n";
	valor = 0;

	while(N>=50){
		N-=50;
		valor++;
	}

	cout << valor<<" nota(s) de R$ 50.00\n";
	valor = 0;

	while(N>=20){
		N-=20;
		valor++;
	}

	cout << valor<<" nota(s) de R$ 20.00\n";
	valor = 0;

	while(N>=10){
		N-=10;
		valor++;
	}

	cout << valor<<" nota(s) de R$ 10.00\n";
	valor = 0;

	while(N>=5){
		N-=5;
		valor++;
	}

	cout << valor<<" nota(s) de R$ 5.00\n";
	valor = 0;

	while(N>=2){
		N-=2;
		valor++;
	}

	cout << valor<<" nota(s) de R$ 2.00\n";
	valor = 0;

	cout << "MOEDAS:\n";

	while(N>=1){
		N-=1;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 1.00\n";
	valor = 0;

	while(N>=0.5){
		N-=0.5;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 0.50\n";
	valor = 0;

	while(N>=0.25){
		N-=0.25;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 0.25\n";
	valor = 0;

	while(N>=0.10){
		N-=0.10;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 0.10\n";
	valor = 0;

	while(N>=0.05){
		N-=0.05;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 0.05\n";
	valor = 0;

	while(N>=0.01){
		N-=0.01;
		valor++;
	}

	cout << valor<<" moeda(s) de R$ 0.01\n";
	
}

/*
//Pode-se fazer assim porém é necessário forçar a precisão na hora de imprimir
//1.00 está saindo como 1, fiquei com preguiça de pesquisar como resolver isso :P
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	int qtd;
	float N, vet[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	
	cin >> N;
	cout << "NOTAS:\n";
	
	for(int i = 0; i < 12; i++){
		qtd=0;
		
		while(N>=vet[i]){
			N-=vet[i];
			qtd++;
		}
		
		if(i < 6){ 
			cout << qtd <<" nota(s) de R$ "<< vet[i] <<"\n";
		}
		else if(i==6){ 
			cout << "MOEDAS:\n";
			cout << qtd <<" moeda(s) de R$ "<< vet[i] <<"\n";
		}
		else{ 
			cout << qtd <<" moeda(s) de R$ "<< vet[i] <<"\n"; 
		}
	}
	
	return 0;
}
*/