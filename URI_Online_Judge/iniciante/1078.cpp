#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int num;
    int i=1;
     
    scanf("%d", &num);
 
    while(i<=10){
         
        cout << i << " x " << num << " = " << i*num << endl;
        i++;
    }
     
    return 0;
}
