#include <string>
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[]){
	int cont, distancia;
	using namespace std;
	string nome;
	float media, distTotal=0.0;
	
	while (getline(cin, nome)){
		scanf("%d", &distancia);
		distTotal += distancia;
		cont++;
	}

	media = distTotal/cont;
	printf("%.1f\n", media);
	
}
