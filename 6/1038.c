#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, k;
	int a[100001] = {0};
	for(i=0; i<n; i++)
	{
		scanf("%d", &k);
		a[k]++;
	}
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(i!=0)
		{
			printf(" ");
		}
		printf("%d", a[k]);
	}
	return 0;
}