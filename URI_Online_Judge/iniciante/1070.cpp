#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int i, num, n=6;
	int qtd = 0;

	scanf("%d", &num);

	while(qtd < n)
	{
		if (!(num%2==0))
		{
			cout << num << endl;
			qtd++;
			num++;
		}
		else{
			num++;
		}
	}

	return 0;
}