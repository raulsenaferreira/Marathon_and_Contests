#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int x, cont = 0;
 
    scanf("%d",&x);
 
    printf("%d\n", x);
 
    while((x-100) >= 0){
        cont++;
        x = x-100;
    }
    printf("%d nota(s) de R$ 100,00\n", cont);
 
    cont = 0;
 
    while(x-50 >= 0){
        cont++;
        x = x-50;
    }
    printf("%d nota(s) de R$ 50,00\n", cont);
 
    cont = 0;
 
    while(x-20 >= 0){
        cont++;
        x = x-20;
    }
    printf("%d nota(s) de R$ 20,00\n", cont);
 
    cont = 0;
 
    while(x-10 >= 0){
        cont++;
        x = x-10;
    }
    printf("%d nota(s) de R$ 10,00\n", cont);
 
    cont = 0;
 
    while(x-5 >= 0){
        cont++;
        x = x-5;
    }
    printf("%d nota(s) de R$ 5,00\n", cont);
 
    cont = 0;
 
    while(x-2 >= 0){
        cont++;
        x = x-2;
    }
    printf("%d nota(s) de R$ 2,00\n", cont);
 
    cont = 0;
 
    while(x-1 >= 0){
        cont++;
        x = x-1;
    }
    printf("%d nota(s) de R$ 1,00\n", cont);
}
