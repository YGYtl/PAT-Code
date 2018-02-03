#include<stdio.h>
int main()
{
	int a[10000] = {'\0'};
	int n, i, j, k=0, c=0;
	for(i=0; i<10; i++)
	{
		scanf("%d", &n);
		for(j=0; j<n; j++)
		{
			a[c] = k;
			c++;
		}
		k++;
	}
	k = 0;
	for(i=0; i<c; i++)
	{
		if(a[i]!=0)
		{
			j = a[i];
			a[k] = 0;
			a[0] = j;
			break;
		}
		k++;
	}
	
	for(i=0; i<c; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}