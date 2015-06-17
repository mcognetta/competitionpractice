//6506 - Padovan Sequence

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	long v[101];
	v[1] = 1;
	v[2] = 1;
	v[3] = 1;

	for(int i = 4; i < 101; i++)
	{
		v[i] = v[i-3] + v[i-2];
	}

	int trials;
	cin >> trials;
	while(trials)
	{
		int t;
		cin >> t;
		cout << v[t] << endl;
		trials--;
	}

	return 0;
}