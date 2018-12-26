#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct date{
	int num;
	int node;
};
date l1[100000], l2[100000], l3[100000];
int l[100000];
int main()
{
	int n, head, k, o1, o2, o3, c=0, c1, h = -2;
	int count = 0, u;
	scanf("%d %d", &n, &head);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		scanf("%d %d", &l1[k].num, &l1[k].node);
	}
	o1 = head;
	while(o1!=-1)
	{
		l2[o1].num = l1[o1].num;
		l2[o1].node = l1[o1].node;
		o1 = l1[o1].node;
	}
	o1 = head;
	while(o1!=-1)
	{
		l[c++] = l2[o1].num;
		o1 = l2[o1].node;
	}
	sort(l,l+c);
	count = c;
	k = 0;
	while(c--)
	{
		o1 = head;
		while(l2[o1].num!=l[k]) o1 = l2[o1].node;
		if(h == -2)
		{
			h = o1;
			u = o1;
			l3[o1].num = l2[o1].num;
		}
		else{
			l3[u].node = o1;
			l3[o1].num = l2[o1].num;
			u = o1;
		}
		k++;
	}
	l3[u].node = o1;
	l3[o1].num = l2[o1].num;
	l3[o1].node = -1;
	printf("%d %05d\n", count, h);
	while(1)
	{
		if(l3[h].node==-1) break;
		printf("%05d %d %05d\n", h, l3[h].num, l3[h].node);
		h = l3[h].node;
	}
	if(count!=0) printf("%05d %d -1\n", h, l3[h].num);
	return 0;
}
