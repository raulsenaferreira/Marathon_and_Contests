#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int entrada;
    int a = 0;
    int m = 0;
    int d = 0;
    scanf("%d",&entrada);
    
    while((entrada-365) > 0){
    	entrada = entrada-365;
    	a++;
    }
    while((entrada-30) > 0){
    	entrada = entrada-30;
    	m++;
    }
    
    d = entrada;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
}
