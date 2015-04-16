#include <iostream>
#include <cstdio>
 
using namespace std;

int main(int argc, char *argv[]){
	long long int i, ho;
	
	cin>>ho;
	if (ho > 0){
		for(i=0;i<ho-1;i++) cout << "Ho ";
		cout << "Ho!"<<endl;
	}
	else
		cout << endl;
	
	return 0;
}
