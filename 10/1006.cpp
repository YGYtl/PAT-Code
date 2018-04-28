#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
struct data{
	string name;
	int hh1, mm1, ss1;
	int hh2, mm2, ss2;
	int k1;
	int k2;
}a;
bool cmp1(data a1, data a2)
{
	return a1.k1 < a2.k1;
}
bool cmp2(data a1, data a2)
{
	return a1.k2 > a2.k2;
}

vector<data> v;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		cin >> a.name;
		scanf("%d:%d:%d", &a.hh1, &a.mm1, &a.ss1);
		scanf("%d:%d:%d", &a.hh2, &a.mm2, &a.ss2);
		a.k1 = a.hh1*3600 + a.mm1*60 + a.ss1;
		a.k2 = a.hh2*3600 + a.mm2*60 + a.ss2;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp1);
	cout << v[0].name << " ";
	sort(v.begin(),v.end(), cmp2);
	cout << v[0].name;
	return 0;
}