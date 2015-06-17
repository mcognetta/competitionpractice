//3470 - Pascal Library

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int num_alum,num_dinners,temp;
	bool yes;
	while(cin >> num_alum >> num_dinners)
	{
		if(num_alum == 0)
		{
			break;
		}

		int t[num_alum];
		for(int i = 0; i < num_alum; i++)
		{
			t[i] = 1;
		}

		for(int i = 0; i < num_dinners; i++)
		{
			for(int j = 0; j < num_alum; j++)
			{
				cin >> temp;
				t[j]*=temp;
			}
		}

		yes = false;

		for(int i = 0; i < num_alum; i++)
		{
			if(t[i] == 1)
			{
				yes = true;
				i = num_alum+1;
			}
		}

		if(yes)
		{
			cout << "yes\n";
		}

		else
		{
			cout << "no\n";
		}
	}

	return 0;
}