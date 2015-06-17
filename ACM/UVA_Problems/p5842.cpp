//5842 - Equipment

#include <stdlib.h>
#include <iostream>
using namespace std;

struct equipment
{
	int score[5];
};

int score_objects(equipment x, equipment y)
{
	int out = 0;
	for(int i = 0; i < 5; i++)
	{
		if(x.score[i] < y.score[i])
		{
			out += y.score[i];
		}

		else
		{
			out += x.score[i];
		}
	}
	return out;
}

long score_object(equipment x)
{
	long out = 0;

	for(int i = 0; i < 5; i++)
	{
		out += x.score[i];
	}

	return out;
}

equipment add_objects(equipment x, equipment y)
{
	equipment out;
	for(int i = 0; i < 5; i++)
	{
		if(x.score[i] < y.score[i])
		{
			out.score[i] = y.score[i];
		}

		else
		{
			out.score[i] = x.score[i];
		}
	}
	return out;
}

equipment K[10001][10001];

int main()
{

	int trials, objects, choose;
	cin >> trials;
	equipment zero;
	zero.score[0] = 0;
	zero.score[1] = 0;
	zero.score[2] = 0;
	zero.score[3] = 0;
	zero.score[4] = 0;

	while(trials)
	{

		cin >> objects >> choose;
		equipment obj[objects];
		for(int i = 0; i < objects; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				cin >> obj[i].score[j];
			}
		}

		if(choose == 1)
		{
			int max = 0;
			for(int i = 0; i < objects; i++)
			{
				if(score_object(obj[i]) > max)
				{
					max = score_object(obj[i]);
				}
			}
			cout << max << endl;
			trials--;
			continue;
		}

		if(choose == objects)
		{
			equipment out;
			for(int x = 0; x < 5; x++)
			{
				out.score[x] = 0;
			}
			for(int i = 0; i < objects; i++)
			{
				out = add_objects(obj[i],out);
			}

			cout << score_object(out) << endl;
			trials--;
			continue;
		}

		for(int i = 0; i <= objects; i++)
		{
			for(int w = 0; w <= choose; w++)
			{
				if(i == 0 || w == 0)
				{
					K[i][w] = zero;
				}

				else if(w >= 1)
				{
					if(score_objects(obj[i-1],K[i-1][w-1])>score_object(K[i-1][w]))
					{
						K[i][w] = add_objects(obj[i-1],K[i-1][w-1]);
					}

					else
					{
						K[i][w] = K[i-1][w];
					}
				}

				else
				{
					K[i][w] = K[i-1][w];
				}
			}
		}

		cout << score_object(K[objects][choose]) << endl;

		trials--;
	}
	return 0;
}