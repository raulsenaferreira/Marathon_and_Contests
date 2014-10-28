#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
	int c1,c2;

	while (scanf("%d %d", &c1, &c2) == 2){
		if(c1 != 0 && c2 != 0){
			if(c1>0 && c2>0){
				printf("primeiro\n");
			}
			else if(c1<0 && c2>0){
				printf("segundo\n");
			}
			else if(c1<0 && c2<0){
				printf("terceiro\n");
			}
			else{
				printf("quarto\n");
			}
		}
		else{
			return 0;
		}
	}		
}
