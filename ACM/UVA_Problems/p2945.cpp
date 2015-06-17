//2945 - Help R2-D2!

#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int capacity,num,b,used,waste,s;
	char size;
	list<int> l;

	while(cin >> capacity)
	{
		s = 0;
		l.push_back(0);
		cin >> num;
		for(int i = 0; i < num; i++)
		{
			cin >> size;
			if(size == 'b')
			{
				cin >> b >> s;
				i += b;
				for(int j = 0; j < b; j++)
				{
					for(list<int>::iterator it = l.begin();it != l.end(); it++)
					{
						if(*it+s < capacity)
						{
							*it += s;
						}
						else
						{
							l.push_back(s);
						}
					}

				}
			}

			else
			{
				s = (size - '0');
				for(list<int>::iterator it = l.begin();it != l.end(); it++)
				{
					if(*it+size < capacity)
					{
						*it += s;
					}
					else
					{
						l.push_back(s);
					}
				}
			}
		}
		used = 0;
		waste = 0;
		for(list<int>::iterator it = l.begin();it != l.end(); it++)
		{
			cout << *it << endl;
			waste += capacity-*it;
			used++;
		}

		cout << used << " " << waste << endl << endl;

		l.clear();
	}
	return 0;
}