#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n, p, k, c=0, t=0;
	long long v[100001]={'\0'};
	memset(v,0,100001);
	scanf("%d %d", &n, &p);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	sort(v,v+n);
	for(int i=0; i<n; i++)//m
	{
		long long m_p = v[i]*p;
		t = c + i;
		if(t>=n) break;
		for(int j=t; j<n; j++)//M
		{
			if(v[j]<=m_p) c++;
			else break;
		}
	}
	printf("%d\n", c);
	return 0;
}
