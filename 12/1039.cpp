#include<iostream>
#include<cstdio>
#include<map>
#include<set>
using namespace std;
int main()
{
	int n, k, a, b;
	string str;
	map<string, set<int> > m;
	scanf("%d %d", &n, &k);
	for(int i=0; i<k; i++)
	{
		scanf("%d %d", &a, &b);
		for(int j=0; j<b; j++)
		{
			cin >> str;
			scanf("%s", str);
			m[str].insert(a);
		}
	}
	set<int>::iterator s;
	for(int i=0; i<n; i++)
	{
		cin >> str;
		cout << str;
		printf(" %d", m[str].size());
		for(s=m[str].begin(); s!=m[str].end(); s++)
		{
			printf(" %d", *s);
		}
		printf("\n");
	}
	return 0;
}
