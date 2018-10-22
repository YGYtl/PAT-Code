#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main()
{
	int n, a[1001];
	map<int,int> m;
	vector<int> vm;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		m[a[i]] = 2;
	}
	for(int i=0; i<n; i++)
	{
		int k = a[i];
		while(k>1)
		{
			if(k%2==0) k /= 2;
			else k = (3*k+1)/2;
			if(k!=a[i]&&m[k]==2) m[k] = 1;
		}
	}
	map<int,int>::iterator v;
	for(v=m.begin(); v!=m.end(); v++) if(v->second==2) vm.push_back(v->first);
	sort(vm.begin(),vm.end(),cmp);
	for(int i=0; i<vm.size(); i++)
	{
		if(i) printf(" ");
		printf("%d", vm[i]);
	}
	return 0;
}
