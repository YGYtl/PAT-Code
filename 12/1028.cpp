#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
struct date{
	string id;
	string name;
	int num;
};
bool cmp1(date a, date b) { return a.id < b.id; }
bool cmp2(date a, date b) 
{
	if(a.name!=b.name) return a.name < b.name;
	else return a.id < b.id;
}
bool cmp3(date a, date b)
{
	if(a.num != b.num) return a.num < b.num;
	else return a.id < b.id;
}
date s[100001];
int main()
{
	int n, c, m;
	scanf("%d %d", &n, &c);
	for(int i=0; i<n; i++)
	{
		cin >> s[i].id >> s[i].name;
		scanf("%d", &s[i].num);
	}
	switch (c)
	{
		case 1:
			sort(s,s+n,cmp1);
			break;
		case 2:
			sort(s,s+n,cmp2);
			break;
		case 3:
			sort(s,s+n,cmp3);
			break;
	}
	for(int i=0; i<n; i++)
	{
		cout << s[i].id <<" " << s[i].name << " " << s[i].num << endl;
	}
	return 0;
}
