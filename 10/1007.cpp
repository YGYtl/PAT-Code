#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
vector<int> v;
int main()
{
	int n, k, p1, i, l = 0;
	int p, q, sum1, sum2=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &k);
		if(k >= 0) l = 1;
		v.push_back(k);
	}
	if(l == 0)
	{
		cout << "0 " << v[0] << " " << v[v.size()-1];
		return 0;
	}
	sum1 = v[0];
	p = sum1;
	q = sum1;
	for(i=0; i<v.size(); i++)
	{
		if(sum2 > 0)
			sum2 += v[i];
		else{
			sum2 = v[i];
			p1 = sum2;
		}
		if(sum2 > sum1)
		{
			sum1 = sum2;
			p = p1;
			q = v[i];
		}
	}
	printf("%d %d %d\n", sum1, p, q);
	return 0;
}