#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct date{
	int num;
	int v, t;
	int sum;
};
int n, p1, p2;
date a1[100001];
date a2[100001];
date a3[100001];
date a4[100001];
bool cmp(date o1, date o2)
{
	if(o1.sum!=o2.sum) return o1.sum > o2.sum;
	else if(o1.v!= o2.v) return o1.v > o2.v;
	else return o1.num < o2.num;
}
int main()
{
	int c = 0;
	int c1=0, c2=0, c3=0, c4=0;
	date b;
	scanf("%d %d %d", &n, &p1, &p2);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d", &b.num, &b.v, &b.t);
		b.sum = b.v + b.t;
		if(b.v < p1 || b.t < p1) continue;
		if(b.v >= p2 && b.t >= p2)
		{
			a1[c1++] = b;
		}
		else if(b.v >= p2 && b.t < p2) a2[c2++] = b;
		else if(b.v < p2 && b.t < p2 && b.v >= b.t) a3[c3++] = b;
		else a4[c4++] = b;
	}
	printf("%d\n", c1+c2+c3+c4);
	sort(a1,a1+c1,cmp);
	sort(a2,a2+c2,cmp);
	sort(a3,a3+c3,cmp);
	sort(a4,a4+c4,cmp);
	for(int i=0; i<c1; i++)
	{
		printf("%d %d %d\n", a1[i].num, a1[i].v, a1[i].t);
	}
	for(int i=0; i<c2; i++)
	{
		printf("%d %d %d\n", a2[i].num, a2[i].v, a2[i].t);
	}
	for(int i=0; i<c3; i++)
	{
		printf("%d %d %d\n", a3[i].num, a3[i].v, a3[i].t);
	}
	for(int i=0; i<c4; i++)
	{
		printf("%d %d %d\n", a4[i].num, a4[i].v, a4[i].t);
	}
	return 0;
}
