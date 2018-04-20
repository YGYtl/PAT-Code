#include<cstdio>
#include<map>
#include<set>
using namespace std;
map<int, double> ma;
set<int> sta;
int main()
{
	int k, c=0, n;
	double m;
	scanf("%d", &k);
	while(k--)
	{
		scanf("%d %lf", &n, &m);
		ma[n] = m;
	}
	scanf("%d", &k);
	while(k--)
	{
		scanf("%d %lf", &n, &m);
		if(ma[n]!=0)
		{
			ma[n] = ma[n]+m;
		}
		else
		{
			ma[n] = m;
		}
	}
	map<int, double>::iterator mp;
	for(mp = ma.begin(); mp!=ma.end(); mp++)
	{
		if(mp->second)
		{
			c++;
			sta.insert(mp->first);
		}
	}
	printf("%d", c);
	set<int>::reverse_iterator it;
	for(it = sta.rbegin(); it!=sta.rend(); it++)
	{
		if(ma[*it])
		{
			printf(" %d %.1f", *it, ma[*it]);
		}
	}
	return 0;
}