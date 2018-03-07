#include<stdio.h>
int main()
{
	int arr[105][10]={'\0'};
	int numscore[105][5]={'\0'};
	int tongji[105][10]={'\0'};
	int m, n, mymax=0;
	scanf("%d %d", &m, &n);
	int i;
	int a1;
	int j, k, l;
	char c;
	int ans=0, stu=0, key;
	double sum=0;
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d", &numscore[i][0], &a1, &numscore[i][1]);
		for(j=0; j<numscore[i][1]; j++)
		{
			getchar();
			scanf("%c", &c);
			arr[i][c-'a']=1;
			tongji[i][c-'a'] = m;
		}
	}
	while(m--)
	{
		for(j=0; j<n; j++)
		{
			key = 1;
			ans = 0;
			getchar();
			scanf("(%d", &stu);
			for(i=0; i<stu; i++)
			{
				getchar();
				scanf("%c", &c);
				if(arr[j][c-'a'])
				{
					ans++;
					tongji[j][c-'a']--;
				}
				else{
					key = 0;
					tongji[j][c-'a']++;
				}
			}
			scanf(")");
			if(key){
			if (ans==numscore[j][1]) sum+=numscore[j][0];
				else{
					sum += numscore[j][0]*1.0/2; 
				}
			}
		}
		printf("%.1f\n", sum);
		sum = 0;
	}
	
	for(i=0; i<n; i++)
	{
		for(c='a'; c<='e'; c++)
		{
			if(tongji[i][c-'a']>mymax)
			{
				mymax = tongji[i][c-'a'];
			}
		}
	}
	
	if(mymax>0)
	{
		for(i=0; i<n; i++)
		{
			for(c='a'; c<='e'; c++)
			{
				if(tongji[i][c-'a']==mymax)
				{
					printf("%d %d-%c\n", mymax, i+1, c);
				}
			}
		}
	}
	else{
		printf("Too simple\n");
	}
	return 0;
}