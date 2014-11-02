#include <stdio.h>

int main(int argc, char *argv[]){
	int n, a, b, i;
	
	
	while (scanf("%d", &n)==1){
		int winA = 0;
		int winB = 0;
		
		if(n==0){
			return 0;
		}
		
		for(i = 0; i < n; i++){
			scanf("%d %d", &a, &b);
			if(a > b){
				winA++;
			}
			else if(b > a){
				winB++;
			}
		}
		printf("%d %d\n", winA, winB);		
	}

	return 0;
}
