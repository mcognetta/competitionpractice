//6758 - Balloons Colors

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	int trials,num,X,Y,easiest,hardest,temp;
	cin >> trials;
	while(trials)
	{
		cin >> num >> X >> Y;
		for(int i = 0; i < num;i++)
		{
			cin >> temp;
			if(i == 0)
			{
				easiest = temp;
			}

			if(i == num-1)
			{
				hardest = temp;
			}
		}

		if(easiest == X && hardest == Y)
		{
			cout << "BOTH" << endl;
		}

		if(easiest == X && hardest != Y)
		{
			cout << "EASY" << endl;
		}

		if(easiest != X && hardest == Y)
		{
			cout << "HARD" << endl;
		}

		if(easiest != X && hardest != Y)
		{
			cout << "OKAY" << endl;
		}
		
		trials--;
	}

	return 0;
}