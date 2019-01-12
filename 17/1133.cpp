#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct date{
	int head;
	int num;
	int last;
};
date l1[100001], l2[100001], l3[100001];
map<int, int> l;
int main()
{
	int head, n, k;
	int c1=0, c2=0, c3=0;
	int a, b, c;
	vector<int> v1, v2, v3;
	scanf("%d %d %d", &head, &n, &k);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		l1[a].head = a;
		l1[a].num = b;
		l1[a].last = c;
	}
	while(head!=-1)
	{
		l2[c1].head = l1[head].head;
		l2[c1].num = l1[head].num;
		b = l2[c1].num;
		l[b] = l2[c1].head;
		if(b < 0) v1.push_back(b);
		else if(b>=0&&b<=k) v2.push_back(b);
		else v3.push_back(b);
		l2[c1++].last = l1[head].last;
		head = l1[head].last;
	}
	for(int i=0; i<v1.size(); i++)
	{
		l3[c2].head = l[v1[i]];
		l3[c2++].num = v1[i];
	}
	for(int i=0; i<v2.size(); i++)
	{
		l3[c2].head = l[v2[i]];
		l3[c2++].num = v2[i];
	}
	for(int i=0; i<v3.size(); i++)
	{
		l3[c2].head = l[v3[i]];
		l3[c2++].num = v3[i];
	}
	for(int i=0; i<c2-1; i++)
	{
		printf("%05d %d %05d\n", l3[i].head, l3[i].num, l3[i+1].head);
	}
	printf("%05d %d -1\n", l3[c2-1].head, l3[c2-1].num);
	return 0;
}
