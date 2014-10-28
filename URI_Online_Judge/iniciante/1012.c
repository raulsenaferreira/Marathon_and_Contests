#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	float a,b,c,aTR,aC,aT,aQ,aR,pi=3.14159;

	scanf("%f %f %f", &a, &b, &c);
	
	aTR = (a*c)/2;
	aC = c*c*pi;
	aT = ((a+b)*c)/2;
	aQ = b*b;
	aR = a*b;
	
	printf("TRIANGULO: %.3f\n",aTR);
	printf("CIRCULO: %.3f\n",aC);
	printf("TRAPEZIO: %.3f\n",aT);
	printf("QUADRADO: %.3f\n",aQ);
	printf("RETANGULO: %.3f\n",aR);
}
