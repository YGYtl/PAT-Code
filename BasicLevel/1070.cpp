#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n, sum = 0;
	vector<int> v;
	scanf("%d", &n);
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	sort(v.begin(),v.end());
	sum = v[0];
	for(int i=1; i<v.size(); i++) sum = (sum + v[i])/2;
	printf("%d\n", sum);
	return 0;
}
