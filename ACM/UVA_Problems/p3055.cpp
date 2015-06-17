
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool compare(string a, string b);

int main()
{

	int num_words;
	int count = 1;

	while(cin >> num_words)
	{

		if(num_words == 0)
		{
			continue;
		}

		string words[num_words];

		bool flag = false;


		for(int i = 0; i < num_words/2; i++)
		{
			cin >> words[i] >> words[num_words-i-1];
		}

		if(num_words % 2 == 1)
		{
			cin >> words[(int)ceil(num_words/2)];
		}
		
		printf("SET %d\n", count);

		for(int i = 0; i < num_words; i++)
		{
			cout << words[i] << endl;
		}

		count++;
	}

	return 0;
}