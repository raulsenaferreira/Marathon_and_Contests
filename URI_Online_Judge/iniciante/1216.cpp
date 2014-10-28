#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]){
    int cont = 0;
    int distancia;
    
    char nome[256];
    char sobrenome[50];
    double media, distTotal=0.0;
     
    cin.get(nome, 256);
        scanf("%d", &distancia);
        distTotal += distancia;
        cont++;
        cout << distTotal << endl;
    
 
    media = distTotal/cont;
    printf("%.1f\n", media);
     
}