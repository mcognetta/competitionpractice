//3600 - Root of the Problem

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int min(int a, int b, int B,int N)
{
	if(fabs(pow(a,N)-B) < fabs(pow(b,N)-B))
	{
		return a;
	}

	else
	{
		return b;
	}
}

int main()
{

	int B,N,up,down;
	float r;

	while(cin >> B >> N)
	{
		if(B == 0)
		{
			break;
		}
		r = pow(B,1.0/N);
		up = (int)ceil(r);
		down = (int)floor(r);
		cout << min(up,down,B,N) << endl;
	}

}