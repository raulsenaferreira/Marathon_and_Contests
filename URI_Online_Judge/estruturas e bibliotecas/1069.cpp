#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
	int N=1000;//tamanho da string
	int n;//qtd casos de teste
	
	char vetExpr[N];
	
	scanf("%d", &n);
	for(int k = 0; k < n; k++){
		scanf("%s",vetExpr);
		int tp = 0; //simula topo da pilha
		int diamante = 0;
		int i = 0;
		
		while(vetExpr[i]!='\0'){
			
			if (vetExpr[i]=='<'){
				tp++;
			}
			else if(vetExpr[i]=='>'){
				if (tp>0)
				{
					tp--;
					diamante++;
				}
			}
			i++;
		}
		
		cout << diamante << endl;
	}
		
	return 0;
}

