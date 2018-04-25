#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> a;
vector<int> b;
int sum = 0;

int c(int c, int e)
{
	int sta = 0, end = 0;
	if(c < e) {sta = c; end = e;}
	else if(c == e) return 0;
	else{sta = e; end = c;}
	int ma = b[end] - b[sta];
	int mt = sum - ma;
	return ma < mt ? ma : mt;
}
int main()
{
	int n, k, p1, p2;
	cin >> n;
	a.resize(n+1);
	b.resize(n+1); 
	b[1] = 0;
	for(int i=1; i<=n; i++)
	{
		cin >> k;
		a[i] = k;
		if(i > 1) b[i] = sum;
		sum += k;
	}
	int m;
	cin >> m;
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &p1, &p2);
		printf("%d\n", c(p1, p2));
	}
	return 0;
}