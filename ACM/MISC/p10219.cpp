#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

double n_choose_k(long n, long k)
{ 
	if(n-k < k)
	{
		k = n-k;
	}

	double out = 0;

	for(int x = 1; x <= k; x++)
	{
		out += log10(n) - log10(x);
		n--;
	}
	return floor(out)+1;
}

int main()
{
	long n;
	long k;

	while(cin >> n >> k)
	{
		cout << n_choose_k(n,k) << endl;
	}

	return 0;
}