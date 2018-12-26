#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> v;
int k = 1;
int f(int n)
{
	for(; k<n; k++)
	{
		if(v[k]!=k) return k;//1
	}
	return -1;
}
void swap(int a, int b)
{
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
}
int main()
{
	int n, c=0, num, j;
	v.resize(100005);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num);
		v[num] = i;
	}
	while(1)
	{
		if(!v[0])
		{
			j = f(n);
			if(j==-1) break;
		}
		else j = v[0];//7
		swap(0,j);
		c++;
	}
	printf("%d\n", c);
	return 0;
}
