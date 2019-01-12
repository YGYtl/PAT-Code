#include<iostream>
#include<cstdio>
#include<set>
#include<map>
using namespace std;
int main()
{
	int n, m, a, b, k, g;
	scanf("%d %d", &n, &m);
	map<int, set<int> > mp;
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		mp[a].insert(b);
		mp[b].insert(a);
	}
	for(int i=0; i<m; i++)
	{
		bool flag = true;
		scanf("%d", &k);
		set<int> s;
		for(int j=0; j<k; j++)
		{
			scanf("%d", &g);
			s.insert(g);
		}
		set<int>::iterator v1, v2;
		for(v1=s.begin(); v1!=s.end()&&flag; v1++)
		{
			for(v2=mp[*v1].begin(); v2!=mp[*v1].end(); v2++)
			{
				if(s.find(*v2)!=s.end())
				{
					flag = false;
					break;
				}
			}
		}
		if(flag == false) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
