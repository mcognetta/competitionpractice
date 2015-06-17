#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double n,k;
	while(cin >> n >> k)
	{
		cout << (int)round(powl(k, (1.0/n))) << endl;
	}
	return 0;
}