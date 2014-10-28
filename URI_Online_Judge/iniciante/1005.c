#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	float a,b;
	scanf("%f", &a);
	scanf("%f", &b);
	a = a*3.5;
	b = b*7.5;
	printf("MEDIA = %.5f\n", (a+b)/11);
}
