#include<stdio.h>
int main()
{
	int n, a[100000]={'\0'};
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int j, k, o;
	for(j=1; j<n; j++)
	{
		for(k=0; k<n-j; k++)
		{
			if(a[k]>a[k+1])
			{
				o = a[k];
				a[k] = a[k+1];
				a[k+1] = o;
			}
		}
	}
	int sum = a[0];
	for(i=1; i<n; i++)
	{
		sum = (sum+a[i])/2;
	}
	printf("%d", sum);
	return 0;
}