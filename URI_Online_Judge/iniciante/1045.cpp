#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

vector<double> bubbleSort(vector<double> vet){
	double aux;

	for (int i = 0; i < vet.size(); i++)
	{
		for (int j = 0; j < vet.size()-1; j++)
		{
			if (vet[i]>vet[j])
			{
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}

	return vet;
}

int main(int argc, char const *argv[])
{
	double a, b, c;
	vector<double> vet;

	scanf("%lf %lf %lf", &a, &b, &c);
	
	vet.push_back(a);
	vet.push_back(b);
	vet.push_back(c);
	vet = bubbleSort(vet);

	a = vet[0];
	b = vet[1];
	c = vet[2];
	
	if (a>=(b+c))
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	if (pow(a,2)==(pow(b,2)+pow(c,2)))
	{
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if (pow(a,2)>(pow(b,2)+pow(c,2)))
	{
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	if (pow(a,2)<(pow(b,2)+pow(c,2)))
	{
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if (a==b && b==c)
	{
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	else if ((a==b && b!=c)||(a==c && b!=c)||(b==c && a!=b))
	{
		cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
} 