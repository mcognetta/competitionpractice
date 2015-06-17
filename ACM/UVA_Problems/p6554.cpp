//6554 - Cuckoo for Hashing

#include <stdlib.h>
#include <iostream>
using namespace std;

void h(int element, int *top, int *bot, int top_size, int bot_size)
{
	bool in_top = true;

	while(true)
	{

		if(in_top)
		{
			if(top[element%top_size] == -1)
			{
				top[element%top_size] = element;
				break;
			}

			else
			{
				int temp = top[element%top_size];
				top[element%top_size] = element;
				element = temp;
				in_top = false;
			}
		}

		else
		{
			if(bot[element%bot_size] == -1)
			{
				bot[element%bot_size] = element;
				break;
			}
			
			else
			{
				int temp = bot[element%bot_size];
				bot[element%bot_size] = element;
				element = temp;
				in_top = true;
			}
		}
	}
}

int main()
{
	int element,top_size,bot_size,inserts;
	int count = 1;

	while(true)
	{
		cin >> top_size >> bot_size >> inserts;
		if(top_size == 0)
		{
			break;
		}

		else
		{
			int top[top_size];
			int bot[bot_size];
			for(int i = 0; i < top_size; i++)
			{
				top[i] = -1;
			}
			for(int i = 0; i < bot_size; i++)
			{
				bot[i] = -1;
			}

			for(int j = 0; j < inserts; j++)
			{
				cin >> element;
				h(element,top,bot,top_size,bot_size);
			}
			bool p_top = false;
			bool p_bot = false;

			for(int i = 0; i < top_size; i++)
			{
				if(top[i] != -1)
				{
					p_top = true;
					i = top_size+1;
				}

			}
			
			for(int i = 0; i < bot_size; i++)
			{
				if(bot[i] != -1)
				{
					p_bot = true;
					i = bot_size+1;
				}

			}

			printf("Case %d:\n",count);
			if(p_top)
			{
				printf("Table 1\n");
				for(int i = 0; i < top_size; i++)
				{
					if(top[i] != -1)
					{
						printf("%d:%d\n",i,top[i]);
					}
				}

				if(p_bot)
				{
					printf("Table 2\n");
					for(int i = 0; i < bot_size; i++)
					{
						if(bot[i] != -1)
						{
							printf("%d:%d\n",i,bot[i]);
						}
					}
				}
			}
			count++;
		}
	}
	return 0;
}