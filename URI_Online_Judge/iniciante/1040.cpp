#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double n1, n2, n3, n4, media;

	while(scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4)==4){
		media = (n1+n2+n3+n4)/4;
		cout << "Media: " << setprecision (2) << media << endl;

		if (media < 5.0)
		{	
			cout << "Aluno reprovado." << endl;
		}
		else if (media >=5.0 && media <= 6.9)
		{
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
			cout << "Media final: " << setprecision (2) << mediaFinal << endl;
		}
		else{
			cout << "Aluno aprovado." << endl;
		}
	}		
		
	return 0;
}