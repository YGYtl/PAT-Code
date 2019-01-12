#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string s;
	int d, c, sum;
};
int l, h;
bool cmp(data a, data b)
{
	if(a.sum!=b.sum) return a.sum > b.sum;
	else
	{
		if(a.d!=b.d) return a.d > b.d;
		else return a.s < b.s;
	}
}
int main()
{
	int n, d, c, num=0;
	vector<data> v1, v2, v3, v4;
	string str;
	scanf("%d %d %d", &n, &l, &h);
	for(int i=0; i<n; i++)
	{
		data a;
		cin >> a.s >> a.d >> a.c;
		if(a.d < l ||a.c < l) continue;
		else
		{
			a.sum = a.d + a.c;
			if(a.d>=h&&a.c>=h) v1.push_back(a);//才德全尽 
			else if(a.d>a.c&&a.d>=h) v2.push_back(a);//德胜才 
			else if(a.d>=a.c) v3.push_back(a);//才德兼亡 
			else v4.push_back(a);//其他
			num++;
		}
	}
	printf("%d\n", num);
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	for(int i=0; i<v1.size(); i++)
	{
		cout << v1[i].s << " " << v1[i].d << " " << v1[i].c << endl;
	}
	for(int i=0; i<v2.size(); i++)
	{
		cout << v2[i].s << " " << v2[i].d << " " << v2[i].c << endl;
	}
	for(int i=0; i<v3.size(); i++)
	{
		cout << v3[i].s << " " << v3[i].d << " " << v3[i].c << endl;
	}
	for(int i=0; i<v4.size(); i++)
	{
		cout << v4[i].s << " " << v4[i].d << " " << v4[i].c << endl;
	}
	return 0;
}
