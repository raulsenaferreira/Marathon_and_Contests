#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int verificaPrimo(int num){
	double raiz = sqrt(num);
	if(num == 2){
		return 1;
	}
	else if(num < 2 || num % 2 == 0){
		return 0;
	}
	
	for(int i = 3; i < raiz; i+=2){
		if(num % i == 0){
			return 0;
		}
	}
	
	return 1;
	
}

int main(int argc, char *argv[]){
    int N, num, isPrimo;
    
    cin >> N;
    for(int i = 0; i < N; i++){
    	scanf("%d", &num);
    	isPrimo = verificaPrimo(num);
    	
    	if(isPrimo == 1){
    		cout << "Prime" << endl;
    	}
    	else{
    		cout << "Not Prime" << endl;
    	}
    }
    
    return 0;
}
