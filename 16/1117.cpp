#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, k;
	scanf("%d", &n);
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	int m = n;
	while(m>=1&&v[n-m]<=m) m--;
	cout << m << endl;
	return 0;
}
