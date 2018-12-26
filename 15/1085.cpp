#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long n, p, max=0;
	long long q, t;
	scanf("%lld %lld", &n, &p);
	int v[n]; 
	for(long long i=0; i<n; i++) scanf("%lld", &v[i]);
	sort(v,v+n);
	for(long long i=0; i<n; i++)
	{
		q = v[i]*p;
		t = max + i;
		if(t >= n) break; 
		for(int j=t; j<n; j++)
		{
			if(v[j] <= q) max++;
			else break;
		}
	}
	printf("%lld\n", max);
	return 0;
}
