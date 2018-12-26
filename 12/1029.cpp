#include<iostream>
#include<cstdio>
using namespace std;
long int v1[2000005], v2[2000005], v[2000005];
int main()
{
	int n, k=2, i, j;
	while(k--)
	{
		scanf("%d", &n);
		if(k==1)
		{
			for(i=0; i<n; i++) scanf("%d", &v1[i]);
		}
		else{
			for(j=0; j<n; j++) scanf("%d", &v2[j]);
		}
	}
	int o1=0, o2=0, o;
	for(o=0; o1<i&&o2<j; o++)
	{
		if(v1[o1]<v2[o2]) v[o] = v1[o1++];
		else v[o] = v2[o2++];
	}
	if(o1<i)
	{
		for(int u=o1; u<i; u++) v[o++] = v1[u];
	}
	if(o2<j)
	{
		for(int u=o2; u<j; u++) v[o++] = v2[u];
	}
	printf("%d\n", v[(o-1)>>1]);
	return 0;
}
