//3077 - No Brainer

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
		if(x >= y)
		{
			cout << "MMM BRAINS" << endl;
		}

		else
		{
			cout << "NO BRAINS" << endl;
		}

		trials--;
	}

	return 0;
}