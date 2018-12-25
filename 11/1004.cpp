#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
using namespace std;
int n, m, k, num, nk;
map<int, vector<int> > mp;
int visited[101] = {0};
void DFS(int id, int level)//1, 0
{
	if(mp[id].empty())//找到叶节点 
	{
		++visited[level];//每层叶子节点的个数 
		return ;
	}
	vector<int>::iterator v;
	for(v=mp[id].begin(); v!=mp[id].end(); v++)
	{
		DFS(*v,level+1);
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++)
	{
		cin >> num >> k;
		for(int j=0; j<k; j++)
		{
			cin >> nk;
			mp[num].push_back(nk);//相当于邻接表 
		}
	}
	DFS(1,0);
	printf("%d", visited[0]);
	int c = visited[0];
	for(int i=1; c<n-m; i++) 
	{
		printf(" %d", visited[i]);
		c += visited[i];//累计总叶节点数 
	}
	printf("\n");
	return 0;
}
