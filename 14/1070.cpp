#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct date{
	double num;
	double m;
	double ave;
};
bool cmp(date a, date b)
{
	return a.ave > b.ave;
}
int main()
{
	int n;
	double c = 0, sum;
	scanf("%d %lf", &n, &sum);
	vector<date> v;
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%lf", &v[i].num);
	for(int i=0; i<n; i++)
	{
		scanf("%lf", &v[i].m);
		v[i].ave = v[i].m/v[i].num;
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0; i<n; i++)
	{
		if(sum >= v[i].num)
		{
			c += v[i].m;
		}
		else{
			c += sum*v[i].ave;
			break;
		}
		sum -= v[i].num;
	}
	printf("%.2f\n", c);
	return 0;
}
