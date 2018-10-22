#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string name;
	string x;
	int n;
};
bool cmp(data a, data b)
{
	return a.n > b.n;
}
int main()
{
	int n;
	scanf("%d", &n);
	vector<data> v;
	for(int i=0; i<n; i++)
	{
		data a;
		cin >> a.name >> a.x >> a.n;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp);
	cout << v[0].name << " " << v[0].x << endl;
	cout << v[v.size()-1].name << " " << v[v.size()-1].x << endl;
	return 0;
}
