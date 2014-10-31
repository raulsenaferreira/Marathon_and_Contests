#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int casos, a;
	int in=0;
	int out=0;

	scanf("%d", &casos);

	for (int i = 0; i < casos; i++)
	{
		scanf("%d", &a);
		if (a>=10 && a<=20)
		{
			in++;
		}
		else{
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}