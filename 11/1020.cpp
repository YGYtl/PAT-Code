#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> in, post, level(10000,-1);
void pre(int root, int start, int end, int index)
{
	if(start > end) return ;
	int i = start;
	while(i<end && in[i]!=post[root]) i++;
	level[index] = post[root];
	pre(root-1-end+i, start, i-1, 2*index+1);
	pre(root-1, i+1, end, 2*index+2);
}
int main()
{
	int n, c=0;
	scanf("%d", &n);
	post.resize(n);
	in.resize(n);
	for(int i=0; i<n; i++) scanf("%d", &post[i]);
	for(int i=0; i<n; i++) scanf("%d", &in[i]);
	pre(n-1,0,n-1,0);
	for(int i=0; i<level.size(); i++)
	{
		if(level[i] != -1)
		{
			if(c) printf(" ");
			printf("%d", level[i]);
			c++;
		}
		if(c==n) break;
	}
	return 0;
}
