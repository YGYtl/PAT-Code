#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	int k, g1, g2;
	vector<int> v;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		g1 = 0;
		for(int j=0; j<n; j++)
		{
			scanf("%d", &k);
			if(j==0) { g2 = k; continue; }
			if(k>=0&&k<=m) v.push_back(k);
		}
		sort(v.begin(), v.end());
		for(int j=1; j<v.size()-1; j++) g1 += v[j];
		printf("%.0f\n", ((g1/(v.size()-2)+g2)+0.5)/2);
		v.clear();
	}
	return 0;
}
