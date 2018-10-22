#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int a[1001][1001];
int m, n, k;
bool judge(int i, int j)
{
	if(i>=1)
		if(abs(a[i][j]-a[i-1][j])<=k) return false;
	if(i<=n-2)
		if(abs(a[i][j]-a[i+1][j])<=k) return false;
	if(j>=1)
		if(abs(a[i][j]-a[i][j-1])<=k) return false;
	if(j<=m-2)
		if(abs(a[i][j]-a[i][j+1])<=k) return false;
	if(i>=1&&j>=1)
		if(abs(a[i][j]-a[i-1][j-1])<=k) return false;
	if(i>=1&&j<=m-2)
		if(abs(a[i][j]-a[i-1][j+1])<=k) return false;
	if(i<=n-2&&j>=1)
		if(abs(a[i][j]-a[i+1][j-1])<=k) return false;	
	if(i<=n-2&&j<=m-2)
		if(abs(a[i][j]-a[i+1][j+1])<=k) return false;
	return true;
}
int main()
{
	int c = 0, x, y, max;
	map<int,int> v;
	scanf("%d %d %d", &m, &n, &k);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
			v[a[i][j]]++;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(judge(i,j)&&v[a[i][j]]==1)
			{
				c++;
				if(c==1)
				{
					x = j+1; y = i+1; max = a[i][j];
				}
				if(c==2) break;
			}
		}
		if(c==2) break;
	}
	if(c==0) printf("Not Exist\n");
	else if(c==1) printf("(%d, %d): %d\n", x, y, max);
	else printf("Not Unique\n");
	return 0;
}
