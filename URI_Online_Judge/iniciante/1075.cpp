#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int num;
    int i=1;
     
    scanf("%d", &num);
 
    while(i<10000){
        if(i%num==2){
            cout << i << endl;
        }
        i++;
    }
     
    return 0;
}
