//2945 - Help R2-D2!

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int capacity,num,b,used,waste,s;
	string size;
	bool inserted;

	while(cin >> capacity)
	{
		cin >> num;
		int t[num+1];
		for(int i = 0; i < num+1; i++)
		{
			t[i] = 0;
		}

		for(int i = 0; i < num; i++)
		{
			cin >> size;
			if(size[0] == 'b')
			{
				cout << "size " << size << endl;

				cin >> b >> s;
				cout << "b " << b << " s " << s << endl;
				cout << "i " << i << endl;
				i+=b;
				for(int j = 0; j < b; j++)
				{
					for(int k = 0; k < num+1; k++)
					{
						if(t[k]+s<=capacity)
						{
							t[k]+=s;
							k = num+2;
						}
					}
				}
			}
			else
			{
				s = stoi(size);
				cout << "size1 " << size << endl;
				{
					for(int k = 0; k < num+1; k++)
					{
						if(t[k]+s<=capacity)
						{
							t[k]+=s;
							k = num+2;
						}
					}
				}
			}
		}
		used = 0;
		waste = 0;
		for(int i = 0; i < num+1; i++)
		{
			if(t[i] != 0)
			{
				used++;
				waste += capacity-t[i];
			}
		}
		cout << used << " " << waste << endl << endl;
	}
	return 0;
}