//4873 - Penney Game

#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int trials,count;
	string run,temp;
	map<string,int> m;
	cin >> trials;
	while(trials)
	{
		cin >> count;
		cin >> run;
		m["TTT"] = 0;
		m["TTH"] = 0;
		m["THT"] = 0;
		m["THH"] = 0;
		m["HTT"] = 0;
		m["HTH"] = 0;
		m["HHT"] = 0;
		m["HHH"] = 0;
		for(int i = 0; i < 38; i++)
		{
			temp = string(1,run[i]) + string(1,run[i+1]) + string(1,run[i+2]);
			m[temp] += 1;
		}

		cout << count << " " <<  m["TTT"] << " " << m["TTH"] << " " << m["THT"] << " " << m["THH"] << " " << m["HTT"] << " " << m["HTH"] << " " << m["HHT"] << " " << m["HHH"] << endl;
		trials--;
	}
}