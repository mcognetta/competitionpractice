//4303 - Top Secret

#include <stdlib.h>
#include <iostream>
#include <map>
using namespace std;

long int_pow(int exp)
{
	long out = 10;
	for(int i = 1; i<exp;i++)
	{
		out *= 10;
	}

	return out;
}

int main()
{

	int trials,N,L,R,X;
	long S,temp,e;
	cin >> trials;

	while(trials)
	{
		cin >> N >> S >> L >> R >> X;
		long num[N];
		long val[N];

		e = int_pow(X);
		for(int i = 0; i < N; i++)
		{
			cin >> num[i];
		}
		for(int i = 0; i < N; i++)
		{
			if(i == 0)
			{
				val[i] = (num[N-1]*L + num[1]*R)%e;
			}

			if(i == N-1)
			{
				val[i] = (num[N-2]*L + num[0]*R)%e;
			}

			else
			{
				val[i] = (num[i-1]*L + num[i+1]*R)%e;
			}

		}

		for(int i = 0; i < N; i++)
		{
			if(i == 0)
			{
				cout << val[i];
			}
			else
			{
				cout << " " << val[i];
			}
		}
		if(trials > 0)
		{
			cout << endl;
		}

		trials--;
	}

	return 0;
}