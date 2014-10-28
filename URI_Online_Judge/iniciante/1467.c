#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int a,b,c;

	while(scanf("%d %d %d", &a, &b, &c)==3){
			
		if(a==b && b==c){
			printf("*\n");
		} 
		else{
			if(a!=b && b==c){
				printf("A\n");
			}
			else if(b!=a && a==c){
				printf("B\n");
			}
			else{
				printf("C\n");
			}
		}
		
	}
		
}
