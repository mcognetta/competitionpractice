//walking one

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	string path;
	int start_x,start_y,x,y;
	bool left,right,up,down;

	while(cin >> start_x >> start_y >> path)
	{
		up = true;
		down = false;
		left = false;
		right = false;
		x = start_x;
		y = start_y;

		for(int i = 0; i < path.size(); i++)
		{
			if(path[i] == 'R')
			{
				if(up)
				{
					up = false;
					right = true;
				}

				else if(right)
				{
					right = false;
					down = true;
				}

				else if(down)
				{
					down = false;
					left = true;
				}

				else
				{
					left = false;
					up = true;
				}

			}

			if(path[i] == 'L')
			{
				if(up)
				{
					up = false;
					left = true;
				}

				else if(right)
				{
					right = false;
					up = true;
				}

				else if(down)
				{
					down = false;
					right = true;
				}

				else
				{
					left = false;
					down = true;
				}
			}

			if(path[i] == 'F')
			{
				if(up)
				{
					y += 1;
				}

				if(down)
				{
					y -= 1;
				}

				if(left)
				{
					x -= 1;
				}

				if(right)
				{
					x += 1;
				}
			}

		}

		printf("%02f\n",(double)round(pow(pow(x-start_x,2)+pow(y-start_y,2),.5)));

	}

	return 0;
}