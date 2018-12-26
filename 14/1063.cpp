#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<vector>
using namespace std;
bool B_S(vector<int> a;, int n, int v)
{
	int l, r, mid;
	l = 1, r = n;
	while(l <= r)
	{
		min = (l+r)/2;
		if(v < a[mid]) r = mid - 1;
		if(v > a[mid]) l = mid + 1;
		else return true;
	}
	return false;
}
int main()
{
	int n, m, k, u;
	int a, b;
	map<int, vector<int> > mo;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &k);
		for(int j=0; j<k; j++)
		{
			scanf("%d", &u);
			mo[i].push_back(u);
		}
	}
	scanf("%d", &m);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &a, &b);
		int c = 0, t = 0;
		set<int> s1, s2;
		for(int j=0; j<mo[a].size(); j++)
		{
			if(B_S(mo[b], mo[b].size(), mo[a][j]))
			{
				s1.insert(mo[a][j]);
			}
			s2.insert(mo[a][j]);
		}
		c = s1.size();
		t = s2.size();
		printf("%.1f%%\n", c*100.0/t);
	}
	return 0;
}
