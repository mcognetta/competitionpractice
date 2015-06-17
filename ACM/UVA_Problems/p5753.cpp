//5753 - Roots Intervals
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

float f(double x)
{
	return tan(sin(x))-sin(tan(x))+pow(cos(x),5)-.5;
}

int main()
{

	double a,b,step;
	int n;
	while(cin >> a >> b >> n)
	{
		step = (b-a)/n;
		int count = 0;


		for(int i = 0; i < n; i++)
		{
			if(f(a)*f(a+step) < 1e-7)
			{
				count++;
			}

			a += step;
		}
		cout << count << endl;
	}

	return 0;
}


/*
i want to fix this way

int main()
{
	

	float a,b,step;
	int n;
	while(cin >> a >> b >> n)
	{
		step = fabs(b-a)/n;
		int count = 0;


		for(int i = 0; i < n; i++)
		{
			float temp_1 = f(a);
			float temp_2 = f(a+step);

		if(temp_1 > 0 && temp_2 < 0)
			{
				count += 1;

			}

			if(temp_1 < 0 && temp_2 > 0)
			{
				count += 1;
			}

			if(temp_1 == 0)
			{
				count += 1;
			}


			//cout << temp_1 << endl << temp_2 << endl;
			//cout << temp_1*temp_2 << endl;
			a += step;
		}


		cout << count << endl;
	}

	return 0;
}
*/