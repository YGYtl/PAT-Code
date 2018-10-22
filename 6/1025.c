#include<stdio.h>
struct data{
	int first[100010];
	int list[100010];
	int last[100010];
	int value[100010];
}a;
int main()
{
	int head, n, k;
	scanf("%d %d %d", &head, &n, &k);
	int i, o, c=0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &o);
		scanf("%d %d", &a.value[o], &a.list[o]);
	}
	while(head!=-1)
	{
		a.first[c++] = head;
		head = a.list[head];
	}
	for(i=0; i<c-c%k; i++)
	{
		a.last[i] = a.first[(i/k)*k+k-i%k-1];
	}
	for(i; i<c; i++)
	{
		a.last[i] = a.first[i];
	}
	for(i=0; i<c-1; i++)
	{
		printf("%05d %d %05d\n", a.last[i], a.value[a.last[i]], a.last[i+1]);
	}
	printf("%05d %d %d", a.last[i], a.value[a.last[i]], -1);
	return 0;
}
