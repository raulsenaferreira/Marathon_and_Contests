#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double n1, n2, n3, n4, media;

	while(scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4)==4){
		media = ((n1*2)/10+(n2*3)/10+(n3*4)/10+(n4*1)/10);
		cout << "Media: " << fixed << setprecision (1) << media << endl;

		if (media < 5.0)
		{	
			cout << "Aluno reprovado." << endl;
		}
		else if (media >=7.0)
		{
			cout << "Aluno aprovado." << endl;
		}
		else{
			double mediaFinal;
			cout << "Aluno em exame." << endl;

			scanf("%lf", &mediaFinal);
			
			cout << "Nota do exame: " << mediaFinal << endl;
			mediaFinal = (mediaFinal+media)/2;

			if (mediaFinal >= 5.0)
			{
				cout << "Aluno aprovado." << endl;
			}
			else{
				cout << "Aluno reprovado." << endl;
			}
			cout << "Media final: " << fixed << setprecision (1) << mediaFinal << endl;
		}
	}		
		
	return 0;
}
