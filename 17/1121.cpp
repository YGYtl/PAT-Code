#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1, v2, v3, v4;
	int a, b, num, n;
	v1.resize(1000000);
	v2.resize(1000000);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		v1[a] = b;
		v1[b] = a;
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num);
		v2[num] = 1;
		v3.push_back(num);
	}
	for(int i=0; i<v3.size(); i++)
	{
		if(v2[v3[i]]==1&&v2[v1[v3[i]]]==1) continue;
		v4.push_back(v3[i]);
	}
	printf("%d\n", v4.size());
	sort(v4.begin(),v4.end());
	for(int i=0; i<v4.size(); i++)
	{
		if(i) printf(" %05d", v4[i]);
		else printf("%05d", v4[i]);
	}
	return 0;
}
