#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    string word, word2, word3;
 
    cin >> word; // nao vai ser necessario usa-la na comparacao
    cin >> word2;
    cin >> word3;
 
    if(word2.compare("anelideo")==0){
        if(word3.compare("hematofago")==0){
            cout << "sanguessuga" << endl;
        }
        else if(word3.compare("onivoro")==0){
            cout << "minhoca" << endl;
        }
    }
    else if(word2.compare("inseto")==0){
        if(word3.compare("hematofago")==0){
            cout << "pulga" << endl;
        }
        else if(word3.compare("herbivoro")==0){
            cout << "lagarta" << endl;
        }
    }
    else if(word2.compare("mamifero")==0){
        if(word3.compare("onivoro")==0){
            cout << "homem" << endl;
        }
        else if(word3.compare("herbivoro")==0){
            cout << "vaca" << endl;
        }
    }
    else if(word2.compare("ave")==0){
        if(word3.compare("carnivoro")==0){
            cout << "aguia" << endl;
        }
        else if(word3.compare("onivoro")==0){
            cout << "pomba" << endl;
        }
    }
     
    return 0;
}
