//7120 Everything in Excess!

#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int c[3200]; //counts
	bool p[3200]; //prime or not
	for(int i = 4; i < 3200; i += 2)
	{
		p[i] = 1;
	}
	for(int i = 3; i < 3200; i += 2)
	{
		if(!p[i])
		{
			c[i] = 0;
			for(int j = i*2; j < 3200; j += i)
			{
				p[j] = 1;
			}
		}
	}

	//|sum(a_i)| - |p|


	for(int i = 3; i < 3200; i += 2)
	{
		if(!c[i])
		{
			for(int j = i*2; j < 3200; j += i)
			{
				c[j] = 1;
			}
		}
	}

	for(int i = 2; i <= 11; i++)
	{
		cout << c[i] << endl;
	}

	return 0;
}