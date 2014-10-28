#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int vI[3], vF[3];
	int a,b,c,i,j,aux;
	scanf("%d %d %d", &a, &b, &c);

	vI[0] = a;
	vI[1] = b;
	vI[2] = c;
	
	vF[0] = vI[0];
	vF[1] = vI[1];
	vF[2] = vI[2];
	
	for(i = 0; i < 3; i++){
		for(j = 2; j > 1; j--){
			if(vF[i] > vF[j]){
				aux = vF[j];
				vF[j] = vF[i];
				vF[i] = aux;
			}
		}
	}
	
	for(i = 0; i < 3; i++){
		printf("%d\n", vF[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++){
		printf("%d\n", vI[i]);
	}
}
