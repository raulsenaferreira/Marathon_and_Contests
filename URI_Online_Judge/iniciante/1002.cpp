#include <stdio.h>
#include <iostream>
#define PI 3.14159
using namespace std;
int main() {
     
    double valor;
    double raio;
     
    cin >> raio;
    valor = (raio * raio) * PI;
    printf("A=%.4f\n", valor);
     
    return 0;
 
}