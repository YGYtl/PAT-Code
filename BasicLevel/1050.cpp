#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int a[1001][1001];
int main()
{
	int n, flag = 1;
	memset(a,0,sizeof(a));
	int x=0, y=0, l, h;
	vector<int> v;
	scanf("%d", &n);
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	for(int j=2; j*j<=n; j++)
	{
		if(n%j==0)
		{
			flag = 0;
			l = j;
		}
	}
	sort(v.begin(),v.end(),cmp);
	if(flag)
	{
		for(int i=0; i<n; i++)
		{
			printf("%d\n", v[i]);
		}
		return 0;
	}
	else
	{
		h = n/l;
		int c = 0;
		a[x][y] = v[c++];
		while(c<n)
		{
			while(y+1<l&&!a[x][y+1]) a[x][++y] = v[c++];
			while(x+1<h&&!a[x+1][y]) a[++x][y] = v[c++];
			while(y-1>=0&&!a[x][y-1]) a[x][--y] = v[c++];
			while(x-1>=0&&!a[x-1][y]) a[--x][y] = v[c++];
		}
		for(int i=0; i<h; i++)
		{
			for(int j=0; j<l; j++)
			{
				if(j) printf(" ");
				printf("%d", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
