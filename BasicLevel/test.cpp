#include<iostream>
using namespace std;
int a[1001][1001];
int main()
{
	int m, n;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int j=m; j>0; j--)
	{
		for(int i=1; i<=n; i++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
