#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int entrada;
    int h = 0;
    int m = 0;
    int s = 0;
    scanf("%d",&entrada);
    
    while((entrada-3600) > 0){
    	entrada = entrada-3600;
    	h++;
    }
    while((entrada-60) > 0){
    	entrada = entrada-60;
    	m++;
    }
    
    s = entrada;
    
    printf("%d:%d:%d\n", h, m, s);
}
