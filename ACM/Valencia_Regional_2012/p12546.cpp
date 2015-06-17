#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int phi(int n,int k)
{
	return pow(n,k)-pow(n,k-1);
}

int main()
{

	int num_trials,num_factors,factor,power,result;

	cin >> num_trials;

	while(num_trials>0)
	{

		cin >> num_factors;

		result = 0;

		for(int x = 0; x < num_factors; x++)
		{
			cin >> factor >> power;

			for(int y = 0; y < power; y++)
			{
				result += pow(factor,power);
			}

		}

		cout << (result%1000000007) << endl;

		num_trials--;

	}

	return 0;
}