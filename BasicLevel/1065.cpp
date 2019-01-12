#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
struct data{
	int n1;
	int n2;
};
int main()
{
	int n, c=0, flag = 0, k;
	int o1, o2;
	map<int,int> m;
	vector<data> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		data f;
		scanf("%d %d", &f.n1, &f.n2);
		v.push_back(f);
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		m[k] = 1;
	}
	for(int i=0; i<v.size(); i++)
	{
		if(m[v[i].n1]==1&&m[v[i].n2]==1)
		{
			m[v[i].n1] = 2;
			m[v[i].n2] = 2;
			c += 2;
		}
	}
	printf("%d\n", n-c);
	map<int,int>::iterator u;
	for(u=m.begin(); u!=m.end(); u++)
	{
		if(u->second==1)
		{
			if(flag == 1) printf(" ");
			printf("%05d", u->first);
			flag = 1;
		}
	}
	return 0;
}
