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
	if(mp[id].empty())//�ҵ�Ҷ�ڵ� 
	{
		++visited[level];//ÿ��Ҷ�ӽڵ�ĸ��� 
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
			mp[num].push_back(nk);//�൱���ڽӱ� 
		}
	}
	DFS(1,0);
	printf("%d", visited[0]);
	int c = visited[0];
	for(int i=1; c<n-m; i++) 
	{
		printf(" %d", visited[i]);
		c += visited[i];//�ۼ���Ҷ�ڵ��� 
	}
	printf("\n");
	return 0;
}
