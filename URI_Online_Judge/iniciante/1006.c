#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	a = a*0.2;
	b = b*0.3;
	c = c*0.5;
	printf("MEDIA = %.1f\n", a+b+c);
}
