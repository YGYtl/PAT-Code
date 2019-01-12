#include<iostream>
#include<cstdio>
using namespace std;
int map[201][201];
int p[10000];
int jg(int a, int b)
{
	int f = 0;
	if(a!=-1) p[b++] = a;
	for(int i=0; i<b; i++)
	{
		if(!f)
		{
			for(int j=i+1; j<b; j++)
			{
				if(!map[p[i]][p[j]])
				{
					f = 1; break;
				}
			}
		}
	}
	return f;
}
int main()
{
	int nv, ne, m, k;
	int a, b, u, f;
	scanf("%d %d", &nv, &ne);
	for(int i=0; i<ne; i++)
	{
		scanf("%d %d", &a, &b);
		map[a][b] = map[b][a] = 1;
	}
	scanf("%d", &u);
	while(u--)
	{
		scanf("%d", &f);
		for(int i=0; i<f; i++) scanf("%d", &p[i]);
		if(jg(-1,f))
		{
			printf("Not a Clique\n");
			continue;
		}
		for(int i=1; i<=nv; i++)
		{
			int g = 0;
			for(int j=0; j<f; j++)
			{
				if(map[p[j]][i])
				{
					g = 1; break;
				}
			}
			if(g)
			{
				if(!jg(i,f))
				{
					printf("Not Maximal\n");
					break;
				}
			}
		}
		printf("Yes\n");
	}
	return 0;
}
