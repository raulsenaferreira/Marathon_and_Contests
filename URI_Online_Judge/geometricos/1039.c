#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
	int r1,x1,y1,r2,x2,y2;

	while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
		if (r1 >= 1 && r2 <= 1000 && y2 <= 1000){

			if(r1<r2){
				printf("MORTO\n");
			}
			else if(r1>=r2){
				int difX = x1-x2;
				int difY = y1-y2;
				int difR = r1-r2;
				
				if(pow(difX,2)+pow(difY,2) <= pow(difR,2)){
						printf("RICO\n");
					
				}
				else if(x1==x2 && y1==y2){
					printf("RICO\n");
				}
				else{
						printf("MORTO\n");
				}
			}
		}
	}		
}
