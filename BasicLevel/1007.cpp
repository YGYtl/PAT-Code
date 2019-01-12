#include<iostream>
using namespace std;
bool su(int n)
{
	if(n<2) return false;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int n, a[100001], j=0, c=0;
	scanf("%d", &n);
	for(int i=0; i<=n; i++)
	{
		if(su(i)) a[j++] = i;
	}
	for(int k=1; k<j; k++)
	{
		if(a[k]-a[k-1]==2) c++;
	}
	printf("%d\n", c);
	return 0;
}
