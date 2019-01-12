#include<iostream>
using namespace std;
struct data{
	int first[100010];
	int list[100010];
	int value[100010];
	int last[100010];
}a;
int main()
{
	int head, n, k, h, o, m=0;
	int i;
	scanf("%d %d %d", &head, &n, &k);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &o);
		scanf("%d %d", &a.value[o], &a.first[o]);
	}
	for(i=0; head!=-1; i++)
	{
		a.list[i] = head;
		head = a.first[head];
	}
	for(int j=0; j<i; j++)
	{
		if(a.value[a.list[j]]<0) a.last[m++] = a.list[j];
	}
	for(int j=0; j<i; j++)
	{
		if(a.value[a.list[j]]>=0&&a.value[a.list[j]]<=k) a.last[m++] = a.list[j];
	}
	for(int j=0; j<i; j++)
	{
		if(a.value[a.list[j]]>k) a.last[m++] = a.list[j];
	}
	for(int j=0; j<i-1; j++)
	{
		printf("%05d %d %05d\n", a.last[j], a.value[a.last[j]], a.last[j+1]);
	}
	printf("%05d %d -1", a.last[i-1], a.value[a.last[i-1]]);
	return 0;
}
