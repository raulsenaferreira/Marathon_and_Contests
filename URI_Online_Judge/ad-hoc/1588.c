#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
typedef std::map<std::string, std::int> TStrStrMap;
typedef std::pair<std::string, std::int> TStrStrPair;
//guardando num map, num objeto ou num struct?

class Time{
	string nome;
	int ordemDeAparicao;
	int pontos;
	int vitorias;
	int gols;
	
	public:
		void inicializa(int o, int p, int v, int g);
}

void inicializa(string n, int o, int p, int v, int g){
	nome = n;
	ordemDeAparicao = o;
	pontos = p;
	vitorias = v;
	gols = g;
}

void insereInfoTime(int p, int v, int g){
	pontos = pontos + p;
	vitorias = vitorias + v;
	gols = gols + g;
}

int main(int argc, char *argv[]){

	//TStrStrMap tMap;
	Time time;
	int i, qtyTestCase, qtdtimes, qtdjogos, scoreTime1, scoreTime2;
	char nomeTime[20];
	char time1[20];
	char time2[20];
	
	scanf("%d", &qtyTestCase);
	
	for(i = 0; i < qtyTestCase; i++){
		scanf("%d %d", &qtdtimes, &qtdjogos);
		
		for(i = 0; i < qtdTimes; i++){
			scanf("%s", &nomeTime);
			//tMap.insert(TStrStrPair(time, 0));
			time.inicializa(nomeTime, 1, 0, 0, 0);
		}
		
		for(i = 0; i < qtdJogos; i++){
			scanf("%d %s %d %s", &scoreTime1, &time1, &scoreTime2, time2);
			
			if(scoreTime1 == scoreTime2){
				insereInfoTime(time1, 1, 0, scoreTime1);
				insereInfoTime(time2, 1, 0, scoreTime2);
			}
			else if(scoreTime1 > scoreTime2){
				insereInfoTime(time1, 3, 1, scoreTime1);
				insereInfoTime(time2, 0, 0, scoreTime2);
			}
			else if(scoreTime1 < scoreTime2){
				insereInfoTime(time1, 0, 0, scoreTime1);
				insereInfoTime(time2, 3, 1, scoreTime2);
			}
		}
	}
}
