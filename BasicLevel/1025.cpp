#include<iostream>
#include<cstdio>
using namespace std;
struct data{
	int num;
	int head;
	int last;
};
data l1[100001], l2[100001], l3[100001];
int main()
{
	int head, n, num, h;
	int a, c1=0, c2=0;
	scanf("%d %d %d", &head, &n, &num);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a);
		l1[a].head = a;
		scanf("%d %d", &l1[a].num, &l1[a].last);
	}
	h = head;
	l2[c1].head = h;
	while(h!=-1)
	{
		if(c1>0) l2[c1].head = l2[c1-1].last;
		l2[c1].num = l1[h].num;
		l2[c1++].last = l1[h].last;
		h = l1[h].last;
	}
	for(int i=num; i>=0; i--)
	{
		for(int j=0; j<c1; j++)
		{
			if(l2[j].num==i)
			{
				l3[c2].num = i;
				l3[c2++].head = l2[j].head;
				break;
			}
		}
	}
	for(int i=0; i<c2-1; i++)
	{
		printf("%05d %d %05d\n", l3[i].head, l3[i].num, l3[i+1].head);
	}
	if(c2>=1&&c2<n)
	{
		printf("%05d %d %05d\n", l3[c2-1].head, l3[c2-1].num, l2[num].head);
		for(int i=num; i<c1-1; i++)
		{
			printf("%05d %d %05d\n", l2[i].head, l2[i].num, l2[i+1].head);
		}
		printf("%05d %d -1\n", l2[c1-1].head, l2[c1-1].num);
	}
	else if(c2==n) printf("%05d %d -1\n", l3[c2-1].head, l3[c2-1].num);
	return 0;
}
