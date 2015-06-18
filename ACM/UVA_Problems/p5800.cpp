//5800 - Repeating Characters

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	int trials,count,repeat;
	string s,out;
	cin >> trials;

	while(trials)
	{

		cin >> count >> repeat >> s;
		out = "";
		for(int i = 0; i < s.size();i++)
		{
			for(int j = 0; j < repeat; j++)
			{
				out += string(1,s[i]);
			}
		}
		cout << count << " " << out << endl;
		trials--;
	}

	return 0;
}