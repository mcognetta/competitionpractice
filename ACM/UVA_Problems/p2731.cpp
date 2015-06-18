//2731 - Wacmian Numbers


#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

long int_pow(int base, int exp)
{
	long out = base;
	if(exp == 0)
	{
		return 1;
	}
	for(int i = 1; i < exp; i++)
	{
		out *= base;
	}

	return out;
}

int main()
{
	map<char,int> c;
	c['%'] = 0;
	c[')'] = 1;
	c['~'] = 2;
	c['@'] = 3;
	c['?'] = 4;
	c['\\'] = 5;
	c['$'] = -1;

	string in;
	long out;

	while(cin >> in)
	{
		if(in[0] == '#')
		{
			break;
		}
		out = 0;
		for(int i = 0; i < in.size(); i++)
		{
			out += c[in[i]]*int_pow(6,in.size()-i-1);
		}

		cout << out << endl;

	}
	return 0;
}