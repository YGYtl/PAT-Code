#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
using namespace std;
double bfs();
struct data{
	int num;
	vector<int> v;
};
double p, r;
int n;
data a[100001];
int main()
{
	int k, t;
	double sum;
	scanf("%d %lf %lf", &n, &p, &r);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		if(k)
		{
			for(int j=0; j<k; j++)
			{
				scanf("%d", &t);
				a[i].v.push_back(t);
			}
		}
		else
		{
			scanf("%d", &t);
			a[i].num = t;
		}
	}
	sum = bfs();
	printf("%.1f\n", sum);
	return 0;
}

double bfs()
{
	int index, t=0, u, l=0;
	double sum = 0;
	queue<int> q;
	q.push(0);
	while(!q.empty())
	{
		index = q.front();
		q.pop();
		if(a[index].v.size())
		{
			for(int i=0; i<a[index].v.size(); i++)
			{
				q.push(a[index].v[i]);
				u = a[index].v[i];
			}
		}
		else{
			sum += pow(1+r/100,t)*p*a[index].num;
		}
		if(index==l)
		{
			t++;
			l = u;
		}
	}
	return sum;
}

