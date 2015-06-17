//3056 - Flow Layout

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int width;

	while(cin >> width)
	{
		if(cin == 0)
		{
			continue;
		}

		int x,y;
		cin >> x >> y;
		int current_x = 0;
		int prev_y = 0;
		int current_y = 0;
		int max_x = 0;
		while(x != -1)
		{
			if(x + current_x > width)
			{
				if(x>max_x)
				{
					max_x = x;
				}
				current_x = x;
				
				prev_y = current_y;
				current_y += y;

			}
			else
			{
				current_x += x;
				if(current_x > max_x)
				{
					max_x = current_x;
				}

				if(prev_y + y > current_y)
				{
					current_y = prev_y + y;
				}
			}
			cin >> x >> y;
		}
		if(max_x != 0)
		{
			printf("%d x %d\n", max_x,current_y); // lol
		}
	}

	return 0;
}
