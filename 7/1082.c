#include<stdio.h>
#include<string.h>
int f(int sum);
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	char name[10001][5]={'\0'};
	int x, y, sum=0;
	int total[10001]={'\0'}, kk;
	char a[5];
	for(i=0; i<n; i++)
	{
		scanf("%s %d %d", name[i], &x, &y);
		sum = x*x + y*y;
		total[i] = f(sum);
	}
	int j, max=total[0], min=total[0], ox=0, oi=0;
	for(i=0; i<n; i++)
	{
		if(max < total[i])
		{
			max = total[i];
			ox= i;
		}
		if(min > total[i])
		{
			min = total[i];
			oi = i;
		}
	}
	printf("%s %s", name[oi], name[ox]);
	return 0;
}
int f(int sum)
{
	int i;
	for(i=1; i*i<=sum; i++);
	return i;
}