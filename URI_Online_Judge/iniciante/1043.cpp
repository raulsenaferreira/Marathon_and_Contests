#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
 
int main(int argc, char const *argv[])
{
    double a,b,c;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    if (a==b || b==c || a==c)
    {
        cout << "Perimetro = " << fixed << setprecision(1) << (a+b+c) << endl;
    }
    else{
        cout << "Area = " << fixed << setprecision(1) << ((c*(a+b))/2) << endl;
    }
 
    return 0;
}
