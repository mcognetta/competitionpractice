#include <stdlib.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	string word;
	int c = 0;	
	while(c < n)
	{
		cin>>word;
		if(word.size() == 1)
		{
			cout << word << endl;
			c++;
			continue;
		}
		
		if(word.size() == 2)
		{
			if(word[0] > word[1])
			{
				word[1] = word[0];
			}
			if(word[0] < word[1])
			{
				word[0] = word[1];
			}
			cout << word << endl;
			c++;
			continue;
		}

		for(int i = 0; i < word.size()/2; i++)
		{
			if(word[i] < word[word.size()-i-1])
			{
				word[word.size()-i-1] = word[i];
				if(word.size()%2 == 0)
				{
					int t = word.size()/2;
					if((int)word[t] == 9)
					{

					}
					word[word.size()/2-1] = (char)(int)word[word.size()/2-1]+1;
					word[word.size()/2] = (char)(int)word[word.size()/2]+1;
				}

				else
				{
					word[word.size()/2] = (char)(int)word[word.size()/2]+1;
				}
					
			}
			
			if(word[i] > word[word.size()-i-1])
			{
				word[word.size()-i-1] = word[i];
			}
		}

		cout << word << endl;
		c++;
	}
}	
