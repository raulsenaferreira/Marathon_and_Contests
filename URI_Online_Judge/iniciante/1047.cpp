#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int horaFinal, minutoFinal, horaInicial, minutoInicial;
 
    cin >> horaInicial;
    cin >> minutoInicial;
    cin >> horaFinal;
    cin >> minutoFinal;
 
     
 
    if(minutoFinal < minutoInicial){
        minutoFinal+=60;
        horaInicial+=1;
    }
 
    if(horaInicial>horaFinal){
        horaFinal+=24;
    }
    else if(horaInicial==horaFinal && minutoFinal <= minutoInicial){
        horaFinal+=24;
    }
    cout << "O JOGO DUROU "<< horaFinal - horaInicial <<" HORA(S) E "<< minutoFinal - minutoInicial <<" MINUTO(S)"<<endl;
     
    return 0;
}
