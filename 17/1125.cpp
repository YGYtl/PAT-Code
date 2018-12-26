#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n, a[10001];
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	sort(a,a+n);
	int sum = a[0];
	for(int i=0; i<n; i++) sum = (sum + a[i])/2;
	printf("%d\n", sum);
	return 0;
}
