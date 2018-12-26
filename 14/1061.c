#include<stdio.h>
int main()
{
	int s[1000]={'\0'}, a[1000]={'\0'}, t[100][100]={'\0'};
	int m, n, i, j;
	int sum=0;
	scanf("%d %d", &m, &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &s[i]);
	}
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<m; i++)
	{
		sum = 0;
		for(j=0; j<n; j++)
		{
			scanf("%d", &t[i][j]);
			if(t[i][j]==a[j])
			{
				sum += s[j];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
