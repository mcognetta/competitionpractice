#include <map>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int num_words;
	int num_trials;
	string word;
	int val;
	int total = 0;
	map<string, int> m;

	cin >> num_words >> num_trials;

	while(num_words > 0)
	{
		cin >> word >> val;
		m[word] = val;
		num_words--;
	}

	while(cin >> word)
	{
		if(word == ".")
		{
			cout << total << endl;
			total = 0;
			num_trials--;
			if(num_trials ==  0)
			{
				break;
			}
		}

		else
		{
				if(m.count(word) != 0)
				{
					total+=m[word];
				}
		}
	}
	return 0;
}