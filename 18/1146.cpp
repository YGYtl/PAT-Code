#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int a[1001][1001];
int visited[1001];
int main()
{
	int n;
	int m, j, k, o, flag;
	vector<int> v;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &j, &k);//��㵽�յ� 
		a[k][j] = 1;//�����
	}
	scanf("%d", &o);
	for(int i=0; i<o; i++)
	{
		flag = 0;
		for(int q=1; q<n+1; q++) visited[q]=0;
		for(int j=0; j<n; j++)
		{
			scanf("%d", &k);
			for(int p=1; p<=n; p++)
			{
//				if(visited[p]==1) printf("%d %d\n", k, p);
				if(a[k][p]==1&&visited[p]==0)
				{
					flag = 1;//δ����
					break;
				}
			}
			if(flag==0) visited[k] = 1;
		}
		if(flag == 1) v.push_back(i);
	}
	for(int i=0; i<v.size()-1; i++)
	{
		printf("%d ", v[i]);
	}
	printf("%d", v[v.size()-1]);
	return 0;
}
