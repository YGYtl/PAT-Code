#include<stdio.h>
int main()
{
	int s[10] = {0}, n, k, d;
	int i, sum;
	sum = 0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &s[i]);
	}
	for(i=0; i<n; i++)
	{
		d = s[i]*10;
		for(k=0; k<n; k++)
		{
			if(s[i]!=s[k])
			{
				sum = sum + d + s[k];
			}
		}
	}
	printf("%d", sum);
	return 0;
}