#include <string>
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
	int distancia, cont=0;
	using namespace std;
	string nome;
	double media, distTotal=0.0;
	
	while (getline(cin, nome)){
		if(nome.compare("")){
			scanf("%d", &distancia);
			distTotal += distancia;
			cont++;
		}
	}

	media = distTotal/cont;
	cout << setprecision(1) << fixed << media << endl;
	
	return 0;
}
