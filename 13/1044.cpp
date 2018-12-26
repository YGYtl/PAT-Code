#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	int a, b, c;
};
bool cmp(data a, data b)
{
	return a.c < b.c;
}
int main()
{
	int n, s, sum, a, k, f=1;
	map<int, int> m;
	vector<data> v;
	scanf("%d %d", &n, &s);
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &k);
		m[i] = k;
	}
	for(int j=1; j<=n; j++)
	{
		sum = 0; a = j;
		for(int i=j; i<=n; i++)
		{
			sum += m[i];
			if(sum==s)
			{
				f = 0;
				printf("%d-%d\n", a, i);
				break;
			}
			if(sum > s)
			{
				data b;
				b.a = a; b.b = i; b.c = sum - s;
				v.push_back(b);
				break;
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	if(f)
	{
		for(int i=0; i<v.size(); i++)
		{
			if(v[i].c==v[0].c) printf("%d-%d\n", v[i].a, v[i].b);
			else break;
		}
	}
	return 0;
}
