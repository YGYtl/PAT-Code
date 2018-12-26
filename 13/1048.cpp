#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m, k;
	vector<int> v(100001,0);
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		v[k]++;
	}
	for(int i=0; i<100001; i++)
	{
		if(i==m-i&&v[i]==1) continue;
		if(m-i>0&&v[i]>0&&v[m-i]>0)
		{
			printf("%d %d\n", i, m-i);
			return 0;
		}
	}
	printf("No Solution\n");
	return 0;
}
