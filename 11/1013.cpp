#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool visited[1001];
int map[1001][1001];
int n, m, k, u;
void dfs(int i)
{
	visited[i] = true;
	for(int j=1; j<=n; j++)
	{
		if(visited[j]==false&&map[i][j])
		{
			dfs(j);
		}
	}
}
int main()
{
	int c, a, b;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a][b] = map[b][a] = 1;
	}
	for(int i=0; i<k; i++)
	{
		scanf("%d", &u);
		c = 0;
		memset(visited,false,sizeof(visited));
		visited[u] = true;
		for(int j=1; j<=n; j++)
		{
			if(visited[j]==false)
			{
				dfs(j);
				c++;
			}
		}
		printf("%d\n", c-1);
	}
	return 0;
}
