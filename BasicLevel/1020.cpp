#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	double p;
	double w, y;
};
bool cmp(data a, data b)
{
	return a.p > b.p;
}
int main()
{
	int n;
	double m=0, s;
	vector<data> v;
	scanf("%d %lf", &n, &s);
	for(int i=0; i<n; i++)
	{
		data a;
		scanf("%lf", &a.w);
		v.push_back(a);
	}
	for(int i=0; i<n; i++)
	{
		scanf("%lf", &v[i].y);
		v[i].p = (v[i].y*1.0)/v[i].w;
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0; i<v.size()&&s; i++)
	{
		if(s>=v[i].w)
		{
			m += v[i].y;
			s = s - v[i].w;
		}
		else
		{
			m += s*v[i].p;
			break;
		}
	}
	printf("%.2f\n", m);
	return 0;
}
