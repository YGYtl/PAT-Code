#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool su(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
struct data{
	int s;
	int n;
	bool f;
	data()
	{
		f = false;
	}
}a[100001];
int main()
{
	int n, g, s, st;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i-1].s);
		a[i-1].n = i;
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &st);
		g = 1;
		for(int j=0; j<n; j++)
		{
			if(a[j].s == st)
			{
				g = 0;
				if(a[j].f == true)
				{
					printf("%04d: Checked\n", a[j].s);
					break;
				}
				if(a[j].n==1) printf("%04d: Mystery Award\n", a[j].s);
				else if(su(a[j].n)) printf("%04d: Minion\n", a[j].s);
				else printf("%04d: Chocolate\n", a[j].s);
				a[j].f = true;
				break;
			}	
		}
		if(g) printf("%04d: Are you kidding?\n", st);
	}
	return 0;
}
