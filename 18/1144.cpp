#include<iostream>
#include<cstdio>
using namespace std;
int a[100001];
int main()
{
	int n, k, max = -1;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(i == 0) max = k;
		if(k > max) max = k;
		if(k < 0 || k > 100000) continue;
		a[k] = 1;
	}
	for(int i=1; i<=max; i++)
	{
		if(a[i] == 0)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	if(max==-1) printf("1\n");
	else printf("%d\n", max+1);
	return 0;
}
