#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i,j,ordem=12;
	char op;
	double a, M[ordem][ordem];
	
	scanf("%c",&op);
	
	
	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){
			scanf("%lf", &M[i][j]);
		}
	}

	a = 0;
	
	for(i = 1; i < ordem; i++){
		for(j = 0; j < i; j++){
			a += M[i][j];
		}
	}
		
	if(op == 'S'){
		printf("%.1lf\n",a);
	}
	else if(op == 'M'){
		double media = a/(((ordem*ordem)-ordem)/2);
		printf("%.1lf\n", media);
	}
			
}
