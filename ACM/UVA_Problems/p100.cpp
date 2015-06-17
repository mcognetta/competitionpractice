#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;

int collatz(int n);
int in_range(int s, int e);

int main()
{
	int temp;
	int s;
	int e;
	while(cin >> s >> e)
	{
		int s_orig = s;
		int e_orig = e;

		if(s > e)
		{
			temp = s;
			s = e;
			e = temp;
		}

		printf("%d %d %d\n", s_orig, e_orig, in_range(s,e));
	}

	return 0;
}

int in_range(int s, int e)
{
	int max = 1;
	for(int x = s; x<=e; x++)
	{
		int temp = collatz(x);
		if(temp > max)
		{
			max = temp;
		}
	}
	return max;
}

int collatz(int n)
{
	int count = 1;
	if(n == 1)
	{
		return 1;
	}
	while(n != 1)
	{
		if(n%2 == 1)
		{
			n = 3*n + 1;
		}
		else
		{
			n /= 2;
		}
		count++;
	}
	return count;
}