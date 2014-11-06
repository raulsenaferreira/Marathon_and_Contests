#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int num;
    long int i;
     
 
    scanf("%d", &num);
    while(num>0){
        string txt="";
        cin >> i;
        if (i==0){
            txt+="NULL";
        }
        else if(i%2==0){
            txt+="EVEN ";
        }
        else{
            txt+="ODD ";
        }
 
        if(i>0){
            txt+="POSITIVE";
        }
        else if (i<0){
            txt+="NEGATIVE";
        }
        cout << txt << endl;
        num--;
    }
     
    return 0;
}
