//5932 - Refrigerator Magnet
#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char,int> m;
	string s;
	bool print;

	while(true)
	{
		getline(cin,s);
		print = true;
		m['A'] = 0;
		m['B'] = 0;
		m['C'] = 0;
		m['D'] = 0;
		m['E'] = 0;
		m['F'] = 0;
		m['G'] = 0;
		m['H'] = 0;
		m['I'] = 0;
		m['J'] = 0;
		m['K'] = 0;
		m['L'] = 0;
		m['M'] = 0;
		m['N'] = 0;
		m['O'] = 0;
		m['P'] = 0;
		m['Q'] = 0;
		m['R'] = 0;
		m['S'] = 0;
		m['T'] = 0;
		m['U'] = 0;
		m['V'] = 0;
		m['W'] = 0;
		m['X'] = 0;
		m['Y'] = 0;
		m['Z'] = 0;


		if(s == "END")
		{
			break;
		}

		else
		{
			for(int i = 0; i < s.size(); i++)
			{
				if(s[i] != ' ')
				{

					if(m[s[i]] == 1)
					{
						print = false;
					}
					else
					{
						m[s[i]] = 1;
					}
				}
			}
			if(print)
			{
				cout << s << endl;
			}
		}
	}


	return 0;
}