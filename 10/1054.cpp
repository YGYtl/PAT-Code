#include<cstdio>
int main()
{
	int m, n, c = 0;
	scanf("%d %d", &m, &n);
	int max = 0, k;
	for(int j=0; j<n; j++)
	{
		for(int o=0; o<m; o++)
		{
			scanf("%d", &k);
			if(k!=max)
			{
				if(c==0) max = k;
				else c--;
			}
			else c++;
		}
	}
	printf("%d", max);
	return 0;
}