#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm> 
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main()
{
	vector<int> v1, v2;
	int n, k, sum=0;
	int c1=0, c2=0;
	v1.resize(100000);
	v2.resize(100000);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(k < 0) c1++;
		v1.push_back(k);
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(k < 0) c2++;
		v2.push_back(k);
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	for(int i=0; i<v1.size(); i++)
	{
		if(v1[i] > 0 && v2[i] > 0)
		{
			sum += v1[i]*v2[i];
		}
		else break;
	}
	int l1 = v1.size()-1, l2 = v2.size()-1;
	int c = c1 < c2 ? c1 : c2;
	while(c--)
	{
		sum += v1[l1--]*v2[l2--];
	}
	printf("%d\n", sum);
	return 0;
}
