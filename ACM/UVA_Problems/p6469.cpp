//6469 - Deranged Exams

#include <stdlib.h>
#include <iostream>
using namespace std;

long factorial(long n)
{
	if(n == 1)
	{
		return 1;
	}

	else
	{
		return n*factorial(n-1);
	}
}