#include<stdio.h>
int main()
{
	int n, m, i, k;
	k = 0;
	int a[100] = {0};
	scanf("%d %d", &n, &m);//n=6,m=2
	if(m >= n)
	{
		m = m-n;
	}
	for(i=0; i<n; i++)
	{
		k = i+m;
		if(k >= n)
		{
			k = k-n;
		}
		scanf("%d", &a[k]);
	}
	for(i=0; i<n-1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[i]);
	return 0;
}