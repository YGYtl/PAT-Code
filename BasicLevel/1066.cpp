#include<iostream>
using namespace std;
int main()
{
	int n, m, a, b, k;
	int v[501][501];
	scanf("%d %d %d %d %d", &n, &m, &a, &b, &k);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d", &v[i][j]);
			if(v[i][j]>=a&&v[i][j]<=b) v[i][j] = k;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(j) printf(" ");
			printf("%03d", v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
