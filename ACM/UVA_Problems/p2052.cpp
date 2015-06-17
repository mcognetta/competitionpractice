//2052 - Number Steps

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int trials,x,y;
	cin >> trials;

	while(trials)
	{
		cin >> x >> y;

		if(x == y)
		{
			if(x%2 == 0)
			{
				cout << x+y << endl;
				trials--;
				continue;
			}

			else
			{
				cout << x+y-1 << endl;
				trials--;
				continue;
			}
		}

		else
		{
			if(y == x-2)
			{
				if(x%2 == 0)
				{
					cout << x+y << endl;
					trials--;
					continue;
				}

				else
				{
					cout << x+y-1 << endl;
					trials--;
					continue;
				}
			}

			else
			{
				cout << "No Number" << endl;
				trials--;
				continue;
			}
		}
		trials--;
	}
	return 0;
}