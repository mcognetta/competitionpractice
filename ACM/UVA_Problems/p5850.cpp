//5850 - Turtle

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	string path;
	int trials,x,y,max_x,max_y,min_x,min_y;
	bool left,right,up,down;
	cin >> trials;
	while(trials)
	{
		cin >> path;
		up = true;
		down = false;
		left = false;
		right = false;
		x = 0;
		y = 0;
		max_x = 0;
		max_y = 0;
		min_x = 0;
		min_y = 0;

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

			if(path[i] == 'B')
			{
				if(up)
				{
					y -= 1;
				}

				if(down)
				{
					y += 1;
				}

				if(left)
				{
					x += 1;
				}

				if(right)
				{
					x -= 1;
				}

			}

			if(x > 0)
			{
				if(x > max_x)
				{
					max_x = x;
				}
			}

			if(x < 0)
			{
				if(x < min_x)
				{
					min_x = x;
				}
			}

			if(y > 0)
			{
				if(y > max_y)
				{
					max_y = y;
				}
			}

			if(y < 0)
			{
				if(y < min_y)
				{
					min_y = y;
				}
			}

		}

		cout << (max_x-min_x)*(max_y-min_y) << endl;
		trials--;
	}

	return 0;
}