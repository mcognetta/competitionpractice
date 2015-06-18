//3656 - Odd or Even

#include <stdlib.h>
#include <iostream>
using namespace std;

int min(int a, int b)
{
	if(a > b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int main()
{
	int trials,x,y,temp;
	int odd[2];
	int even[2];
	while(true)
	{
		cin >> trials;
		if(trials == 0)
		{
			break;
		}
		even[0] = 0;
		even[1] = 0;
		odd[0] = 0;
		odd[1] = 0;
		for(int i = 0; i < trials; i++)
		{
			cin >> temp;
			if(temp%2 == 0)
			{
				odd[0]+=1;
			}
			else
			{
				even[0]+=1;
			}
		}

		for(int i = 0; i < trials; i++)
		{
			cin >> temp;
			if(temp%2 == 0)
			{
				odd[1]+=1;
			}
			else
			{
				even[1]+=1;
			}
		}
		cout << -1*(trials - min(odd[0],even[1]) - min(odd[1],even[0])) << endl;
	}

	return 0;
}