#include<cstdio>
#include<iostream>
using namespace std;
long long h(long long n)
{
	long long sum = 0, k;
	while(n)
	{
		k = n%10;
		sum = sum*10 + k;
		n /= 10;
	}
	return sum;
}
bool hw(long long n)
{
	if(h(n)==n) return true;
	else return false;
}
int main()
{
	long long n, sum=0;
	int k, c=0;
	scanf("%lld %d", &n, &k);
	sum = n;
	while(k&&hw(n)==false)
	{
		k--;
		c++;
		sum = n + h(n);
		n = sum;
	}
	printf("%lld\n%d\n", sum, c);
	return 0;
}
