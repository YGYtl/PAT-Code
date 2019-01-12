#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, g, num=0;
	double c = 0;
	vector<double> v;
	scanf("%d", &n);
	g = n;
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%lf", &v[i]);
	if(n==1)
	{
		printf("%.2f\n", v[0]);
		return 0;
	}
	for(int i=0; i<n/2; i++)
	{
		c += v[num++]*g;
		g += 2;
	}
	if(n%2==0) g -= 2;
	else
	{
		g--;
		c += v[num++]*g;
		n-=2;
		g--;
	}
	for(int i=n/2; i>=0; i--)
	{
		c += v[num++]*g;
		g -= 2;
	}
	printf("%.2f\n", c);
	return 0;
}
