#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct date{
	string name;
	string id;
	int num;
};
bool cmp(date a, date b)
{
	return a.num > b.num;
}
int main()
{
	int n, g1, g2, o = 0;
	scanf("%d", &n);
	date v[n];
	for(int i=0; i<n; i++)
	{
		cin >> v[i].name >> v[i].id >> v[i].num;
	}
	scanf("%d %d", &g1, &g2);
	sort(v,v+n,cmp);
	for(int i=0; i<n; i++)
	{
		if(v[i].num >= g1 && v[i].num <= g2)
		{
			cout << v[i].name << " " << v[i].id << endl;
			o = 1;
		}
	}
	if(o == 0) cout << "NONE" << endl;
	return 0;
}
