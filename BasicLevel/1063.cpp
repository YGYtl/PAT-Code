#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, a, b;
	double max = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		double h = sqrt(a*a+b*b);
		if(h > max) max = h;
	}
	printf("%.2f\n", max);
	return 0;
}
