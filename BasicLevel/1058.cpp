#include<iostream>
#include<map>
using namespace std;
struct data{
	int score;
	int num;
	int right;
	string s;
}f[101];
int main()
{
	int n, m, k, sum=0, max=-1;
	int c=0, flag=0;
	char ch;
	scanf("%d %d", &n, &m);
	int a[1004]={'\0'};
	for(int i=0; i<m; i++)
	{
		scanf("%d %d %d", &f[i].score, &f[i].num, &f[i].right);
		for(int j=0; j<f[i].right; j++)
		{
			getchar();
			scanf("%c", &ch);
			f[i].s += ch;
		}
	}
	for(int i=0; i<n; i++)
	{
		sum = 0;
		for(int o=0; o<m; o++)//题
		{
			c = 0; flag = 1;
			getchar();
			scanf("(%d", &k);
			for(int j=0; j<k; j++)
			{
				getchar();
				int u = 1;
				scanf("%c", &ch);
				for(int g=0; g<f[o].s.size(); g++)
				{
					if(f[o].s[g]==ch)
					{
						c++;
						u = 0;
						break;
					}
				}
				if(u) flag=0;//有一个没有找到,说明答案错误
			}
			if(flag&&c==f[o].s.size()) sum += f[o].score;
			else a[o]++;
			if(a[o]>max) max = a[o];
			scanf(")");
		}
		printf("%d\n", sum);
	}
	if(max==0) printf("Too simple\n");
	else
	{
		printf("%d", max);
		for(int i=0; i<m; i++)
		{
			if(a[i]==max) printf(" %d", i+1);
		}
	}
	return 0;
}
