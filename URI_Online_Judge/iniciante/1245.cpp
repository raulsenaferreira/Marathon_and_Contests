#include<iostream>
#include<stdio.h>
using namespace std;

typedef struct bota{
	int tam;
	char pe;
	int verificado;
} Bota;

int main(int argc, char const *argv[])
{
	int M, N, k;
	char L;

	while(scanf("%d", &N)==1){
		Bota* vetBotas[N];
		int pares = 0;
		
		for (k = 0; k < N; k++)
		{
			scanf("%d %c", &M, &L);
			Bota* bota = new Bota;
			bota->tam = M;
			bota->pe = L;
			bota->verificado = 0;
			vetBotas[k] = bota;
		}

		for (int i = 0; i < N; i++){

			if (vetBotas[i]->verificado==0)
			{
				vetBotas[i]->verificado = 1;
				for (int j = i+1; j < N; j++)
				{
					if ((vetBotas[j]->verificado == 0)
					 && (vetBotas[i]->tam == vetBotas[j]->tam) && (vetBotas[i]->pe != vetBotas[j]->pe))
					{
						
						vetBotas[j]->verificado = 1;
						pares++;
						break;
					}
				}
			}
			
		}

		printf("%d\n", pares);
	}		
		
	return 0;
}