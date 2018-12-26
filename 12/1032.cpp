#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
struct date{
	char ch;
	int end;
};
vector<date> L, L1, L2;
//date L[100000];
//date L1[100000];
//date L2[100000];
int main()
{
	int l1, l2, n;
	int k, ll1, ll2;
	char c;
	L.resize(100000);
	L1.resize(100000);
	L2.resize(100000);
	scanf("%d %d %d", &l1, &l2, &n);
	ll1 = l1, ll2 = l2;
	for(int i=0; i<n; i++)
	{
		scanf("%d ", &k);
		scanf("%c %d", &L[k].ch, &L[k].end);
	}
	while(ll1!=-1)
	{
		L1[ll1].ch = L[ll1].ch;
		L1[ll1].end = L[ll1].end;
		ll1 = L[ll1].end;
	}
	while(ll2!=-1)
	{
		L2[ll2].ch = L[ll2].ch;
		L2[ll2].end = L[ll2].end;
		ll2 = L[ll2].end;
	}
	ll1 = l1, ll2 = l2;
	for(ll1; ll1!=-1; ll1=L1[ll1].end)
	{
		for(ll2 = l2; ll2!=-1; ll2=L2[ll2].end)
		{
			if(ll1 == ll2)
			{
				printf("%05d\n", ll1);
				return 0;
			}
		}
	}
	printf("-1\n");
	return 0;
}
