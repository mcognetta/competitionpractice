//2697 - Big Number

#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;


//using Kamenetsky's formula



long k(int n)
{
	if(n == 1)
	{
		return 1;
	}
	//return ceil(log10(2*pi*n)/2+n*(log10(n/e)));
	return (int)(floor((log(2*3.141592653589793238*n)/2+n*(log(n)-log(2.718281828459045235)))/log(10))+1);
}


int main()
{

	int trials,n;

	cin >> trials;

	while(trials)
	{
		cin >> n;
		//cout << e << endl << pi << endl;
		cout << k(n) << endl;

		trials--;
	}
	return 0;
}



/*
int fact(int n)
{
	float out = 0;
	for(int i = 1; i <= n; i++)
	{
		out += log10(i);
	}

	return (int)floor(out) + 1;
}

int main()
{

	int trials;
	int n;
	cin >> trials;

	while(trials)
	{

		cin >> n;

		cout << fact(n) << endl;

		trials--;
	}

	return 0;
}
*/