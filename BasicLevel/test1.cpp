#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, k;
	vector<long long> v;
	scanf("%d %d", &n, &k);
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%lld", &v[i]);
	sort(v.begin(),v.end());
	int c = 0, u = 0;
	for(int i=0; i<n; i++)
	{
		long long m = k*v[i];
		int t = i+c;
		if(t>=k) break;
		for(int j=t; j<n; j++)
		{
			if(v[j]<=m) c++;
			else break;
		}
	}
	printf("%d", c);
	return 0;
}
