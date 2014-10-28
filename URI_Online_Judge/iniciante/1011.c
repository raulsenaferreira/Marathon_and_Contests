#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
	int raio;
	float volume,pi = 3.14159;

	while (scanf("%d", &raio) == 1){
		volume = pi*pow(raio,3)*(4.0/3.0); 
		
	}	
	printf("VOLUME = %.3f\n",volume);	
}
