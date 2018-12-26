#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct date
{
	int head;
	int num;
	int next;
};
date a[100001], l[100001];
date v1[100001], v2[100001];
int v[10001]={'\0'};
int main()
{
	int head, n, k, num, c1, c2;
	scanf("%d %d", &head, &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		scanf("%d %d", &a[k].num, &a[k].next);
		a[k].head = k;
	}
	num = head; k = 0, c1 = 0, c2 = 0;
	while(num!=-1)
	{
		l[k].head = num;
		l[k].num = a[num].num;
		l[k++].next = a[num].next;
		num = a[num].next;
	}
	for(int i=0; i<k; i++)
	{
		if(v[abs(l[i].num)]==1)
		{
			v2[c2].head = l[i].head;
			v2[c2].num = l[i].num;
			v2[c2++].next = l[i].next;
			continue;
		}
		v[abs(l[i].num)] = 1;
		v1[c1].head = l[i].head;
		v1[c1].num = l[i].num;
		v1[c1++].next = l[i].next;
	}
	for(int i=0; i<c1-1; i++)
	{
		printf("%05d %d %05d\n", v1[i].head, v1[i].num, v1[i+1].head);
	}
	printf("%05d %d -1\n", v1[c1-1].head, v1[c1-1].num);
	for(int i=0; i<c2-1; i++)
	{
		printf("%05d %d %05d\n", v2[i].head, v2[i].num, v2[i+1].head);
	}
	if(c2>=1) printf("%05d %d -1\n", v2[c2-1].head, v2[c2-1].num);
	return 0;
}
