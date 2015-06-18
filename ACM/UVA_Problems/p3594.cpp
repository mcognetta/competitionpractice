//3594 - Quicksum

#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char,int> m;
	m[' '] = 0;
	m['A'] = 1;
	m['B'] = 2;
	m['C'] = 3;
	m['D'] = 4;
	m['E'] = 5;
	m['F'] = 6;
	m['G'] = 7;
	m['H'] = 8;
	m['I'] = 9;
	m['J'] = 10;
	m['K'] = 11;
	m['L'] = 12;
	m['M'] = 13;
	m['N'] = 14;
	m['O'] = 15;
	m['P'] = 16;
	m['Q'] = 17;
	m['R'] = 18;
	m['S'] = 19;
	m['T'] = 20;
	m['U'] = 21;
	m['V'] = 22;
	m['W'] = 23;
	m['X'] = 24;
	m['Y'] = 25;
	m['Z'] = 26;

	string word;
	int out;

	while(true)
	{
		out = 0;
		getline(cin,word); 
		if(word[0] == '#')
		{
			break;
		}
		for(int i = 0; i < word.size(); i++)
		{
			out += (i+1)*m[word[i]];
		}

		cout << out << endl;

	}
	return 0;
}