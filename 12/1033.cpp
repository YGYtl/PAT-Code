#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct data{
	double price;
	int d;
	bool operator<(const data g)const{
		return d < g.d;
	}
}a[504];
int c;//罐的最大容量
int d;//杭州与目的之间的距离
int ds;//汽车可以运行的平均距离
int n;//加油站总数
int main()
{
	double sum=0, s_max, m_price;
	int s=0, k=0, l=0, mid;
	scanf("%d %d %d %d", &c, &d, &ds, &n);
	for(int i=0; i<n; i++) scanf("%lf %d", &a[i].price, &a[i].d);
	sort(a,a+n);
	a[n].d = d;
	a[n].price = 0;
	s_max = c * ds;//最大距离
	sum = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i].d!=s) break;//s为当前距离 
		mid = -1;
		m_price = 0x3f3f3f3f;
		for(int j=i+1; j<=n; j++)
		{
			if(s+s_max>=a[j].d)//在最大加油范围内 
			{
				if(a[j].price<a[i].price)//找小于当前钱的 
				{
					mid = j;
					m_price = a[j].price;
					break;
				}
				if(a[j].price<m_price)//找最少钱的 
				{
					mid = j;
					m_price = a[j].price;
				}
			}
		}
		if(mid==-1)
		{
			s = a[i].d + s_max;
			break;
		}
		else{
			if(m_price<a[i].price)
			{
				sum += ((a[mid].d-a[i].d)*1.0/ds - l*1.0/ds)*a[i].price;
				l = 0;
				i = mid-1;
			}
			else
			{
				sum += (c-l*1.0/ds)*a[i].price;
				l = s_max - (a[mid].d-a[i].d);
				i = mid - 1;
			}
			s = a[mid].d;
		}
	}
	if(s == d) printf("%.2lf\n", sum);
	else{
		printf("The maximum travel distance = %.2lf\n", (double)s);
	}
	return 0;
}
