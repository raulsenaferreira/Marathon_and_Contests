#include<stdio.h>
#include<stdlib.h>
 
int main(int argc, char *argv[]){
    int h1,m1,h2,m2,mins;
    int dia=24*60;
 
    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4){
        if(h1==0 && m1==0 && h2==0 && m2==0){
            return 0;
        }
         
        if(h1==0){
            h1=dia;
        }
        else{
            h1=h1*60;
        }
         
        if(h2==0){
            h2=dia;
        }
        else{
            h2=h2*60;
        }
         
        if(h1>=h2 && m1 > m2){
            h2+=dia;
        }
        else if(h1>h2 && m1<=m2){
            h2+=dia;
        }
         
        mins = (h2+m2) - (h1+m1);
         
        printf("%d\n",mins);
    }       
}
