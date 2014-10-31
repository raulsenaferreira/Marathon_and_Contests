#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    int x = pow((x2-x1),2);
    int y = pow((y2-y1),2);
 
    float distancia = sqrt(x+y);
 
    printf("%.4f\n", distancia);
}
