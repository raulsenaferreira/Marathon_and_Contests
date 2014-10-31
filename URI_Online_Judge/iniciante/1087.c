#include<stdio.h>
#include<stdlib.h>
 
int main(int argc, char *argv[]){
    int x1,y1,x2,y2,difX,difY;
 
    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) == 4){
        //if((x1>0 && y1>0 && x2>0 && y2>0) && (x1<8 && y1<8 && x2<8 && y2<8)){
            if(x1==0 && y1==0 && x2==0 && y2==0){
                return 0;
            }
            difX = abs(x1-x2);
            difY = abs(y1-y2);
             
            if(x1==x2 && y1==y2){
                printf("0\n");
            }
            else{
                if( (difX - difY == 0) || ((x1 != x2) && (y1 == y2)) || ((y1 != y2) && (x1 == x2))){
                    printf("1\n");
                }
                else{
                    printf("2\n");
                }
            }
             
        //}
        //else 
         
         
    }       
}
