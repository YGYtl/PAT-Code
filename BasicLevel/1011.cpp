#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	long long a, b, c;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		printf("Case #%d: ", i);
		if(a+b>c) printf("true\n");
		else printf("false\n");
	}
	return 0;
}
