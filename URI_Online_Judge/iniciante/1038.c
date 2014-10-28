#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	float c;
	int a,b;
	scanf("%d %d", &a, &b);
	
	if(a == 1){
		c = 4.00;
	}
	else if(a == 2){
		c = 4.50;
	}
	else if(a == 3){
		c = 5.00;
	}
	else if(a == 4){
		c = 2.00;
	}
	else if(a == 5){
		c = 1.50;
	}
	
	printf("Total: R$ %.2f\n", c*b);
}
