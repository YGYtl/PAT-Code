#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct date{
	int head;
	int num;
	int last;
};
bool cmp(date a, date b)
{
	return a.num > b.num;
}
date l1[100001], l2[100001], l3[100001];
int l[100001];
int main()
{
	int head, n, n_head, num, h, k;
	int c1=0, c2=0, c3=0;
	scanf("%d %d %d", &head, &n, &n_head);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num);
		scanf("%d %d", &l1[num].num, &l1[num].last);
		l1[num].head = num;
	}
	num = head;
	while(num!=-1)
	{
		l2[c1].head = l1[num].head;
		l2[c1].num = l1[num].num;
		l2[c1++].last = l1[num].last;
		num = l1[num].last;
	}
	for(int i=1; i<=c1; i++)
	{
		l3[i-1].head = l2[i-1].head;
		l3[i-1].num = l2[i-1].num;
		l3[i-1].last = l2[i-1].last;
		if(i%n_head==0)
		{
			k = i/n_head - 1;
			sort(l3+(k*n_head),l3+i,cmp);
		}
	}
	for(int i=0; i<c1-1; i++)
	{
//		l3[i].last = l3[i+1].head;
//		printf("%05d %d %05d\n", l3[i].head, l3[i].num, l3[i].last);
		printf("%05d %d %05d\n", l3[i].head, l3[i].num, l3[i+1].head);
	}
	if(c1 >= 1) printf("%05d %d -1\n", l3[c1-1].head, l3[c1-1].num);
	return 0;
}
