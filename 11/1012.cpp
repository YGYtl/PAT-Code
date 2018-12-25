#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string s;
	int a, c, m, e;
	int ma, mc, mm, me;
	int max;
};
bool cmp(int a, int b)
{
	return a > b;
}

vector<data> v;
vector<int> va, vc, vm, ve;
int main()
{
	int m, n, c, i, j;
	string s;
	data a;
	scanf("%d %d", &m, &n);
	while(m--)
	{
		cin >> a.s;
		scanf("%d %d %d", &a.c, &a.m, &a.e);
		a.a = (a.c + a.m + a.e)/3;
		v.push_back(a);
	}
	for(i=0; i<v.size(); i++)
	{
		va.push_back(v[i].a);
		vc.push_back(v[i].c);
		vm.push_back(v[i].m);
		ve.push_back(v[i].e);
	}
	sort(va.begin(),va.end(),cmp);
	sort(vc.begin(),vc.end(),cmp);
	sort(vm.begin(),vm.end(),cmp);
	sort(ve.begin(),ve.end(),cmp);
	for(i=0; i<v.size(); i++)
	{
		for(j=0; j<v.size(); j++)
		{
			if(va[i]==v[j].a) v[j].ma = i+1;
			if(vc[i]==v[j].c) v[j].mc = i+1;
			if(vm[i]==v[j].m) v[j].mm = i+1;
			if(ve[i]==v[j].e) v[j].me = i+1;
		}
	}

	while(n--)
	{
		cin >> s;
		c = 0;
		for(i=0; i<v.size(); i++)
		{
			if(s==v[i].s)
			{
				if(v[i].ma<=v[i].mc&&v[i].ma<=v[i].mm&&v[i].ma<=v[i].me)
				{
					printf("%d %c\n", v[i].ma, 'A');
					c = 1;
				}
				else if(v[i].mc<=v[i].ma&&v[i].mc<=v[i].mm&&v[i].mc<=v[i].me)
				{
					printf("%d %c\n", v[i].mc, 'C');
					c = 1;
				}
				else if(v[i].mm<=v[i].ma&&v[i].mm<=v[i].mc&&v[i].mm<=v[i].me)
				{
					printf("%d %c\n", v[i].mm, 'M');
					c = 1;
				}
				else if(v[i].me<=v[i].ma&&v[i].me<=v[i].mc&&v[i].me<=v[i].mm)
				{
					printf("%d %c\n", v[i].me, 'E');
					c = 1;
				}
				break;
			}
		}
		if(c==0) printf("N/A\n");
	}
	return 0;
}
