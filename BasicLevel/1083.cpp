#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n, k;
	map<int,int> m;//²åÖµ£¬ ´ÎÊı 
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &k);
		m[abs(k-i)]++;
	}
	map<int,int>::reverse_iterator v;
	for(v=m.rbegin(); v!=m.rend(); v++)
	{
		if(v->second==1) continue;
		cout << v->first << " " << v->second << endl;
	}
	return 0;
}
