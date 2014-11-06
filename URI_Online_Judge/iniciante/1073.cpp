#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int num;
    long int i=1;
 
    scanf("%d", &num);
    while(i<=num){
        if(i%2==0){
            cout << i << "^2" << " = " << fixed << setprecision(0) << pow(i,2) << endl;
        }
        i++;
    }
     
    return 0;
}
