//6466 - Von Neumann's Fly

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int trials,num;
	float dist,a,b,fly;
	cin >> trials;
	while(trials)
	{
		cin >> num >> dist >> a >> b >> fly;

		printf("%d %.2f\n",num,dist*fly/(a+b));

		trials--;
	}
	return 0;
}