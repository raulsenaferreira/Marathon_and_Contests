#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int a,b,c,d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	a = a*b;
	b = c*d;
	
	printf("DIFERENCA = %d\n", a-b);
}
