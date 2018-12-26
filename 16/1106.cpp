#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int minv = 999999, minn;
vector< vector<int> > v;
void dfs(int root, int lv)
{
	if(v[root].size()==0)
	{
		if(lv < minv)
		{
			minv = lv;
			minn = 1;
		}
		else if(lv == minv) minn++;
	}
	else
	{
		for(int i=0; i<v[root].size(); i++)
		{
			dfs(v[root][i], lv+1);
		}
	}
}
int main()
{
	
	int n, t, k;
	double p, r;
	scanf("%d %lf %lf", &n, &p, &r);
	v.resize(n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		for(int j=0; j<k; j++)
		{
			scanf("%d", &t);
			v[i].push_back(t);
		}
	}
	dfs(0,0);
	printf("%.4f %d\n", pow(1.0+r/100, minv)*p, minn);
	return 0;
}
