#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	int n, sum = 0, s = 0;
	scanf("%d", &n);
	v.resize(n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &v[i]);
		sum += v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n/2; i++) s += v[i];
	printf("%d %d\n", n%2, sum-2*s);
	return 0;
}
