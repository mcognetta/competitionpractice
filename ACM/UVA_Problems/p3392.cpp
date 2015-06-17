//3392 - Triangular Sums

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	int trials;
	int count = 1;
	long n;

	cin >> trials;

	while(trials)
	{
		cin >> n;
		long out = 0;
		for(int i = 1; i <= n; i++)
		{
			out += i*(i+1)*(i+2)/2;
		}

		cout << count << " " << n << " " << out << endl;
		count++;
		trials--;
	}

	return 0;
}