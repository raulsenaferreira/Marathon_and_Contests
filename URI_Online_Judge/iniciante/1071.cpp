#include <iostream>
#include <cstdio>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int i, ini, fim, aux;
    int result=0;
 
    cin >> ini;
    cin >> fim;
 
    if(ini==fim){
        cout << 0 << endl;
        return 0;
    }
    else if (ini > fim)
    {
        aux = ini;
        ini = fim;
        fim = aux;
    }
 
    for (i = ini+1; i < fim; i++)
    {
        if (i%2!=0){
            result+=i;
        }
    }
     
    cout << result << endl;
    return 0;
}
