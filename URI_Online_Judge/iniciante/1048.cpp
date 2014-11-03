#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double num, porcentagem;
	cin >> num;
	if(num < 401.00){
		porcentagem = 0.15;
	}
	else if(num < 801.00){
		porcentagem = 0.12;
	}
	else if(num < 1201.00){
		porcentagem = 0.10;
	}
	else if(num < 2001.00){
		porcentagem = 0.07;
	}
	else{
		porcentagem = 0.04;
	}
	cout << "Novo salario: " << fixed << setprecision(2) << (num * porcentagem)+num << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << num * porcentagem << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << porcentagem * 100 << " %" << endl;
	return 0;
}
