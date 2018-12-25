#include<iostream>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;
bool visited[1000];
int size[1000];
queue<int> q;
map<int, vector<int> > e;
int main()
{
	int n, a, b, k, c;
	scanf("%d", &n);
	for(int i=0; i<n-1; i++)
	{
		scanf("%d %d", &a, &b);
		e[a].push_back(b);
		e[b].push_back(a);
	}
	for(int i=1; i<=n; i++)//求每个结点的深度 
	{
		for(int m=1; m<=n; m++) visited[m] = false;
		visited[i] = true;
		int o = 1, f = 0, oo = 1;
		int count = 1;
		q.push(i);
		c = 1;
		while(!q.empty())
		{
			k = q.front();
			q.pop();
			f = 0;
			for(int v=0; v<e[k].size(); v++)
			{
				if(visited[e[k][v]]==false)
				{
					q.push(e[k][v]);
					f = 1;
				}
				visited[e[k][v]] = true;
			}
			if(f == 1) count++;
		}
		while(o)
		{
			o = 0;
			for(int u=1; u<=n; u++)
			{
				if(visited[u]==false) 
				{
					o = 1;
					oo = 0;
					q.push(u);
					break;
				}
			}
			if(o == 1)
			{
				size[i] = 0;
				c++;
				visited[q.front()] = true;
				while(!q.empty())
				{
					k = q.front();
					q.pop();
					for(int v=0; v<e[k].size(); v++)
					{
						if(visited[e[k][v]]==false)
						{
							q.push(e[k][v]);
						}
						visited[e[k][v]] = true;
					}
				}
			}
		}
		if(oo==1)size[i] = count;
	}
	int max=-1, flag=0;
	for(int i=1; i<=n; i++)
	{
		if(size[i]>max) max = size[i];
	}
	if(max==0||c > 1) printf("Error: %d components\n", c);
	else{
		for(int i=1; i<=n; i++)
		{
			if(size[i]==max)
			{
				if(flag==1) printf("\n");
				printf("%d", i);
				flag = 1;
			}
		}
	}
	return 0;
}
