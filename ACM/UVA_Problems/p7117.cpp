//p7117 Hy-phe-na-tion Rulez

#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

int main()
{
	string word;

	while(cin >> word)
	{
		if(word == "===")
		{
			continue;
		}

		if(word.size() <= 2)
		{
			cout << word << endl;
		}

	}

	return 0;
}