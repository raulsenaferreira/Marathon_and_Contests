#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	c = (a*b)/12;
	
	printf("%.3f\n", c);
}
