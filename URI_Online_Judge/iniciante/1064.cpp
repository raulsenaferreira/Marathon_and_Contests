#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double num=0.0;
	int cont = 0;
	
	for(int i = 0; i < 6; i++){
		double entrada;
		cin >> entrada;
		if(entrada > 0){
			num+=entrada;
			cont++;
		}
	}
	
	cout << cont <<" valores positivos" << endl;
	cout << fixed << setprecision(1) << num/cont << endl;
	return 0;
}
