#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int factorial(n)
{
	if(n <=1)
	{
		return 1;
	}

	else
	{
		return n*factorial(n-1);
	}
}

int bin_coeff(int n, int k)
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}

int main()
{
	
	return 0;
}