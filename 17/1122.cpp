#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int u[201][201];
	bool visited[201];
	int a, b, o, k1, k2, flag, n, m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &a, &b);
		u[a][b] = u[b][a] = 1;
	}
	scanf("%d", &m);//查询总数量 
	for(int i=0; i<m; i++)
	{
		memset(visited,false,n+1);
		scanf("%d", &o);//数量
		flag = 1;
		if(o!=n+1) flag = 0;
		if(o > 0)
		{
			scanf("%d", &k2);
			visited[k2] = true;
			
		}
		a = k2;
		for(int j=1; j<o; j++)
		{
			scanf("%d", &k1);
			if(flag)
			{
				if(!u[k2][k1]) flag = 0;
				if(visited[k1]&&j!=o-1) flag = 0;
				else visited[k1] = true;
			}
			k2 = k1;
		}
		if(k2!=a) flag = 0;
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
