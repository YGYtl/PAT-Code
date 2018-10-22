#include<iostream>
using namespace std;
int main()
{
	int m, n, g, max = 0;
	char ch;
	scanf("%d %d", &m, &n);
	int score[105][4]={'\0'};
	int a[105][10]={'\0'};
	int b[105][10]={'\0'};
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d", &score[i][0], &g, &score[i][1]);
		for(int j=0; j<score[i][1]; j++)
		{
			getchar();
			scanf("%c", &ch);
			a[i][ch-'a'] = 1;
			b[i][ch-'a'] = m;
		}
	}
	for(int i=0; i<m; i++)
	{
		double sum = 0;
		for(int j=0; j<n; j++)//第几道题 
		{
			getchar();
			scanf("(%d", &g);
			int c = 0, flag = 1;
			for(int k=0; k<g; k++)
			{
				getchar();
				scanf("%c", &ch);
				if(a[j][ch-'a'])
				{
					c++;
					b[j][ch-'a']--;
				}
				else
				{
					b[j][ch-'a']++;
					flag = 0;
				}
			}
			if(flag)
			{
				if(c==score[j][1]) sum += score[j][0];
				else sum += score[j][0]*1.0/2;
			}
			scanf(")");
		}
		printf("%.1f\n", sum);
	}
	for(int i=0; i<n; i++)
	{
		for(ch='a'; ch<='e'; ch++)
		{
			if(b[i][ch-'a']>max) max = b[i][ch-'a'];
		}
	}
	if(max==0) printf("Too simple\n");
	else
	{
		for(int i=0; i<n; i++)
		{
			for(ch='a'; ch<='e'; ch++)
			{
				if(b[i][ch-'a']==max)
				{
					printf("%d %d-%c\n", max, i+1, ch);
				}
			}
		}
	}
	return 0;
}
