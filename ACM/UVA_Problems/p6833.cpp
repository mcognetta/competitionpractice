//6833 - Miscalculation
#include <stdlib.h>
#include <iostream>
#include <deque>
using namespace std;

int evaluate_l_to_r(string s)
{
	int result = (int)s[0]-48;
	if(s.size()>2)
	{
		for(int i = 1; i < s.size(); i += 2)
		{
			if(s[i] == '+')
			{
				result += ((int)s[i+1]-48);
			}
			else
			{
				result *= ((int)s[i+1]-48);
			}
		}
		return result;
	}

	else
	{
		return (int)s[0]-48;
	}
}

int evaluate_mult(string s)
{

	deque<int> terms;

	for(int i = 0; i < s.size(); i++)
	{

		if(s[i] != '*' && s[i] != '+')
		{
			terms.push_front((int)s[i]-48);
		}

		if(s[i] == '*')
		{
			int temp = terms.front();
			terms.pop_front();
			terms.push_front(temp*((int)s[i+1]-48));
			i+=1;
		}

	}

	int result = 0;

	deque<int>::iterator it = terms.begin();
	while(it != terms.end())
	{
		result += *it++;
	}

	return result;

}

int main()
{
	string eq;
	int result;
	while(cin >> eq)
	{
		cin >> result;
		if(evaluate_l_to_r(eq) == result && evaluate_mult(eq) == result)
		{
			cout << "U" << endl;
			continue;
		}

		else if(evaluate_l_to_r(eq) == result)
		{
			cout << "L" << endl;
			continue;
		}

		else if(evaluate_mult(eq) == result)
		{
			cout << "M" << endl;
			continue;
		}

		else
		{
			cout << "I" << endl;
			continue;
		}
	}
	return 0;
}
