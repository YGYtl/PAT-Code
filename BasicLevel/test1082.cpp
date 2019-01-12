#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string s;
	int n;
};
bool cmp(data a, data b)
{
	return a.n < b.n;
}
int main()
{
	int n, x, y;
	scanf("%d", &n);
	vector<data> v; 
	for(int i=0; i<n; i++)
	{
		data a;
		cin >> a.s >> x >> y;
		a.n = x*x + y*y;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp);
	cout << v[0].s << " " << v[n-1].s << endl;
	return 0;
}
