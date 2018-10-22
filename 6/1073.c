#include<stdio.h>
int main()
{
	int arr[105][10]={'\0'};
	int numscore[105][5]={'\0'};
	int tongji[105][10]={'\0'};
	int m, n, max=0;
	scanf("%d %d", &m, &n);
	int i;
	int a1;
	int j, k, l;
	char c;
	int ans=0, stu=0, key;
	double sum=0;
	for(i=0; i<n; i++)//正确的题 
	{
		scanf("%d %d %d", &numscore[i][0], &a1, &numscore[i][1]);
		//0是分数，1是题目正确选项个数 
		for(j=0; j<numscore[i][1]; j++)
		{
			getchar();
			scanf("%c", &c);
			arr[i][c-'a']=1;
			tongji[i][c-'a'] = m;//一共多少道题 
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
				if(arr[j][c-'a'])//正确的话 
				{
					ans++;//算对了多少道 
					tongji[j][c-'a']--;
				}
				else{// 错了 
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
			if(tongji[i][c-'a']>max)
			{
				max = tongji[i][c-'a'];
			}
		}
	}
	
	if(max>0)
	{
		for(i=0; i<n; i++)
		{
			for(c='a'; c<='e'; c++)//这种表达 
			{
				if(tongji[i][c-'a']==max)
				{
					printf("%d %d-%c\n", max, i+1, c);
				}
			}
		}
	}
	else{
		printf("Too simple\n");
	}
	return 0;
}
