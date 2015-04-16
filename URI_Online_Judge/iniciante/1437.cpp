#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
	int N;//Norte
	string c; 
	
	while (cin>>N) {
		if(N==0) return 0;
		else{
			int index=0;
			cin >> c;
			int i;
			for(i=0;i<c.size();i++){
				if(c[i]=='D')	index+=1;
				else if(c[i]=='E')	index+=-1;
			}
		
			index=index % 4;
			if(index==0)	cout << 'N' << endl;
			else if(index==1 || index==-3)	cout << 'L' << endl;
			else if(index==2 || index==-2)	cout << 'S' << endl;
			else if(index==3 || index==-1)	cout << 'O' << endl;	
		}
	}
	
	return 0;
}
