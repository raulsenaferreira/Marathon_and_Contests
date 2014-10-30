#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	
	if (x==y && x==0)
	{
		cout << "Origem" << endl;
	}
	else if (x > 0 && y > 0)
	{
		cout << "Q1" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "Q2" << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "Q3" << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "Q4" << endl;
	}
	else if (x == 0)
	{
		cout << "Eixo Y" << endl;
	}
	else
	{
		cout << "Eixo X" << endl;
	}

	return 0;
}