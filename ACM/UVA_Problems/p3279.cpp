//3279 - Dice

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	string name_1,name_2,parity;
	int rolls,num,score_1,score_2;

	while(true)
	{
		score_1 = 0;
		score_2 = 0;
		cin >> name_1 >> name_2 >> parity;
		if(name_1 == "#")
		{
			break;
		}

		cin >> rolls;

		for(int i = 0; i < rolls; i++)
		{
			cin >> num;
			if((num%2 == 0 && parity == "even") || (num%2 == 1 && parity == "odd"))
			{
				score_2++;
			}
			else
			{
				score_1++;
			}
		}

		cout << name_1 << " " << score_1 << " " << name_2 << " " << score_2 << endl;

	}

	return 0;
}