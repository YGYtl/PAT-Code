#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	vector<int> v;
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			sum += v[i]*10 + v[j];
			sum += v[j]*10 + v[i]; 
		}
	}
	printf("%d\n", sum);
	return 0;
}
