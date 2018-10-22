#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, k;
	scanf("%d", &n);
	vector<int> v;
	v.resize(100001);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		v[k]++;
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(i) printf(" ");
		printf("%d", v[k]);
	}
	return 0;
}
