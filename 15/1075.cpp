#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct date{
	int o[6];
	int sum; 
	int id;
	int flag;
	int c;
	date()
	{
		flag = 0;sum = 0;c == 0;
		o[0]=-2;o[1]=-2;o[2]=-2;o[3]=-2;o[4]=-2;o[5]=-2;
	}
};
bool cmp(date a, date b)
{
	if(a.sum != b.sum) return a.sum > b.sum;
	else
	{
		if(a.c != b.c) return a.c > b.c;
		else return a.id < b.id;
	}
}
date a[100001];
int main()
{
	int n, k, m, f, num, l, c=0, o;
	int da[6];
	scanf("%d %d %d", &n, &k, &m);
	for(int i=1; i<=k; i++) scanf("%d", &da[i]);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d %d", &num, &l, &f);
		if(a[num].o[l] < f) a[num].o[l] = f;
		a[num].id = num;
		a[num].flag = 1;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
		{
			if(a[i].o[j]==da[j]) a[i].c++;
			if(a[i].o[j]==-2||a[i].o[j]==-1||a[i].o[j]==0) continue;
			a[i].sum += a[i].o[j];
		}
	}
	sort(a+1,a+(n+1),cmp);
	for(int i=1; i<=n; i++)
	{
		if(i==1) c = 0;
		else if(a[i].sum==a[i-1].sum) c++;
		else c = 0;
		if(a[i].id==0) continue;
		o = 0;
		for(int j=1; j<=k; j++)
		{
			if(a[i].o[j]>=0)
			{
				o = 1;
				break;
			}
		}
		if(o == 0) continue;
		printf("%d %05d %d", i-c, a[i].id, a[i].sum);
		for(int j=1; j<=k; j++)
		{
			if(a[i].o[j]==-2) printf(" -");
			else if(a[i].o[j]==-1) printf(" 0");
			else printf(" %d", a[i].o[j]);
		}
		printf("\n");
	}
	return 0;
}
