#include<iostream>
#include<algorithm>
using namespace std;
struct data{
	string s;
	int x, y;
	int n;
}a[10001];
bool cmp(data a, data b)
{
	return a.n > b.n;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> a[i].s >> a[i].x >> a[i].y;
		a[i].n = a[i].x*a[i].x + a[i].y*a[i].y;
	}
	sort(a,a+n,cmp);
	cout << a[n-1].s << " " << a[0].s << endl;
	return 0;
}
