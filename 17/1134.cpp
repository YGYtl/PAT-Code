#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int n, m, a, b, k, num, flag, u;
	scanf("%d %d", &n, &m);
	vector<int> v[n];
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &a, &b);
		v[a].push_back(i);
		v[b].push_back(i);
	}
	scanf("%d", &k);
	for(int i=0; i<k; i++)
	{
		scanf("%d", &u);
		vector<int> vd(m,0);
		for(int j=0; j<u; j++)
		{
			scanf("%d", &num);
			for(int p=0; p<v[num].size(); p++) vd[v[num][p]] = 1;
		}
		flag = 1;
		for(int j=0; j<m; j++)
		{
			if(vd[j]==0)
			{
				printf("No\n");
				flag = 0;
				break;
			}
		}
		if(flag==1) printf("Yes\n");
	}
	return 0;
}
