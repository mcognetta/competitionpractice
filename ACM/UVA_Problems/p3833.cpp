//3883 - Prime Gap

#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	bool t[1299709];
	int n,x,y;
	for(int i = 0; i <= 1299709; i++)
	{
		t[i] = 1;
	}

	t[0] = 0;
	t[1] = 0;

	for(int i = 2; i <= 1299709; i++)
	{
		if(t[i] == 1)
		{
			for(int j = i*2; j <= 1299709; j += i)
			{
				t[j] = 0;
			}
		}
	}

	while(cin >> n)
	{
		if(n == 0)
		{
			break;
		}

		else
		{
			if(t[n])
			{
				cout << 0 << endl;
			}

			else
			{
				x = n;
				while(!t[x])
				{
					x++;
				}

				y = n;

				while(!t[y])
				{
					y--;
				}

				cout << x-y << endl;
			}
		}

	}
	return 0;
}