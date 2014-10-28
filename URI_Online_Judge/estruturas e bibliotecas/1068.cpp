#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
	//falta arrumar um jeito correto de ler linha a linha
	int N=1000;//tamanho da string
	
	
	char vetExpr[N];
	
	
	
	while(scanf("%s",vetExpr)!=EOF){
		int flag = 0;//expressão mal formatada
		int tp = 0; //simula topo da pilha
		int i = 0;
		
		while(vetExpr[i]!='\0'){
			
			if (vetExpr[i]=='('){
				tp++;
			}
			else if(vetExpr[i]==')'){
				if (tp>0)
				{
					tp--;
				}
				else{
					flag = 1;
					break;
				}
			}
			i++;
			
		}
		if (tp==0 && flag==0)
		{
			cout << "correct"<<endl;
		}
		else{
			cout << "incorrect"<<endl;
		}
	}
		
		
	return 0;
}

