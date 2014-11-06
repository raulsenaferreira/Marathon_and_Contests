#include <iostream>
#include <cstdio>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int num, pares=0;
    int impares=0;
    int positivos=0;
    int negativos=0;
 
    while(scanf("%d", &num)==1){
        if(num%2==0){
            pares++;
        }
        else if (num%2!=0){
            impares++;
        }
        if (num > 0){
            positivos++;
        }
        else if(num < 0){
            negativos++;
        }
    }
     
    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;
 
    return 0;
}
