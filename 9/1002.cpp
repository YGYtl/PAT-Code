#include<cstdio>
#include<map>
using namespace std;
map<int, double> ma;
int main()
{
	int k, n, c=0;
	int i, j;
	double m;
	for(i=0; i<2; i++)
	{
		scanf("%d", &k);
		while(k--)
		{
			scanf("%d %lf", &n, &m);
			if(ma.count(n)==0) ma[n] = m;
			else{
				ma[n] += m;
			}
		}
	}
	for(map<int, double>::const_iterator m_t = ma.begin(); m_t!=ma.end(); m_t++)
	{
		if(m_t->second) c++;
	}//const_iterator只读取里面的数不改变值。
	printf("%d", c);
	for(map<int, double>::reverse_iterator m_tt = ma.rbegin(); m_tt!=ma.rend(); m_tt++)
	{
		if(m_tt->second) printf(" %d %.1lf", m_tt->first, m_tt->second);
	}//反向迭代，在map，set都可以这么用。
	return 0;
}