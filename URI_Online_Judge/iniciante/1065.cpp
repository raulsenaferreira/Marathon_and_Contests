#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int n;
    int i = 0;
 
    while (scanf("%d", &n) == 1){
        if(n%2==0){
            i++;        
        }
         
    }
    cout << i << " valores pares" << endl;
    return 0;
}
