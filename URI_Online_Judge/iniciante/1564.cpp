#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int n;
    while(scanf("%d", &n)==1){
        if (n>0)
        {
            cout << "vai ter duas!" <<endl;
        }
        else{
            cout << "vai ter copa!" << endl;
        }
    }
    return 0;
}
