#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
	int sieve[1000000] = {0};
	int primes[10000];
	int position = 0;

	for(int x = 3; x < 1000000; x += 2)
	{
		if(sieve[i] == 0)
		{
			prime[position] = i;
			position++;
			for(int y = 0; x*y < 1000000; y += 2)
			{
				sieve[x*y] = 1;
			}
		}
	}

	

	return 0;
}