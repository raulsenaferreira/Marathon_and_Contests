#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int n;
    int m;
 
    while (scanf("%d %d", &n, &m) == 2){
        if(n%m==0){
            cout << "Sao Multiplos" << endl;        
        }
        else if(m%n==0){
            cout << "Sao Multiplos" << endl;
        }
        else{
            cout << "Nao sao Multiplos" << endl;
        }
    }
     
    return 0;
}
