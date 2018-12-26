#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct mouse{
	int weight;
	int c;
	int num;
	mouse() {c = 0;}
};
bool cmp(mouse a, mouse b)
{
	return a.weight > b.weight;
}
int main()
{
	int p, g, c = 0, max, max_index;
	scanf("%d %d", &p, &g);
	mouse m[p];
	vector<int> o;
	vector<mouse> v1, v2, v3;
	o.resize(p);
	for(int i=0; i<p; i++)
	{
		scanf("%d", &m[i].weight);
		m[i].num = i;
	}
	for(int i=0; i<p; i++) scanf("%d", &o[i]);
	for(int i=0; i<p; i++)
	{
		if(c!=g)
		{
			v1.push_back(m[o[i]]);
			c++;
		}
		if(c==g || i==p-1)
		{
			c = 0;
			sort(v1.begin(),v1.end(),cmp);
			v2.push_back(v1[0]);
			for(int j=1; j<g&&j<v1.size(); j++) m[v1[j].num].c++;
			m[v1[0].num].c += 2;
			v1.clear();
		}
	}
	while(v2.size()!=1)
	{
		c = 0;
		for(int i=0; i<v2.size(); i++)
		{
			if(c!=g)
			{
				v1.push_back(v2[i]);
				c++;
			}
			if(c==g)
			{
				c = 0;
				sort(v1.begin(),v1.end(),cmp);
				v3.push_back(v1[0]);
				for(int j=1; j<g&&j<v1.size(); j++) m[v1[j].num].c++;
				m[v1[0].num].c += 2;
				v1.clear();
			}
		}
		v2.clear();
		for(int i=0; i<v3.size(); i++) v2.push_back(v3[i]);
	}
	for(int i=0; i<p; i++)
	{
		printf(" %d", m[i].c);
	}
	return 0;
}
