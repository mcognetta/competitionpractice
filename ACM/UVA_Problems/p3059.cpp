#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	int num;
	int mph, hours;
	int prev_hours = 0;

	while(cin >> num)
	{
		if(num == -1)
		{
			continue;
		}

		int total = 0;
		
		for(int x = 0; x < num; x++)
		{
			cin >> mph >> hours;
			total += mph*(hours - prev_hours);
			prev_hours = hours;
		}

		printf("%d miles\n", total);

		prev_hours = 0;

	}

	return 0;
}