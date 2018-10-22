#include<iostream>
using namespace std;
struct data{
	string s;
	int test, k;
}a[1004];
int main()
{
	int n;
	string str;
	int t, k;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> str >> t >> k;
		a[t].test = t;
		a[t].s = str;
		a[t].k = k;
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		cout << a[k].s << " " << a[k].k << endl;
	}
	return 0;
}
