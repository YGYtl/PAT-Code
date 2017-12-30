#include<stdio.h>

int main()
{
	int s, i, score[10000], j, k, max;
	int a[10000], b[10000], c;
	scanf("%d", &s);
	getchar();
	for(i=0; i<s; i++)
	{
		scanf("%d-%d %d", &a[i], &b[i], &score[i]);
		getchar();
	}
	for(i=0; i<s; i++)
	{
		for(j=i+1; j<s; j++)
		{
			if(a[i]==a[j]&&i<j)
			{
				score[i] = score[i] + score[j];
				score[j] = 0;
			}
		}
	}
	max = score[0];
	k = 0;
	for(i=0; i<s; i++)
	{
		if(score[i]>max)
		{
			max = score[i];
			k = i;
		}
	}
	printf("%d %d", a[k], max);
	return 0;
}