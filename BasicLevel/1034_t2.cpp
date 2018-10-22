#include<iostream>
#include<cstdio>
using namespace std;
long long g(long long a, long long b)
{
	long long m = a%b;
	while(m)
	{
		a = b;
		b = m;
		m = a%b;
	}
	return b;
}

void F(long long a, long long b)
{
	if(b==0)
	{
		printf("Inf");
		return;
	}
	long long k = 1;
	if(a < 0)
	{
		a = -a;
		k = -1;
	}
	long long gcd = g(a,b);
	a /= gcd;
	b /= gcd;
	if(a/b==0&&a!=0)
	{
		if(k<0) printf("(-%lld/%lld)", a, b);
		else printf("%lld/%lld", a, b);
		return;
	}
	k = k * a / b;
	a %= b;
	if(b==1&&k>=0) printf("%lld", k);
	else if(b==1&&k<0) printf("(%lld)", k);
	else if(k<0)printf("(%lld %lld/%lld)", k, a, b);
	else printf("%lld %lld/%lld", k, a, b);
}

void Print(long long a1, long long b1, long long a2, long long b2, char ch)
{
	F(a1,b1);
	printf(" %c ", ch);
	F(a2,b2);
	printf(" = ");
	if(ch=='+')
	{
		long long a = a1*b2 + a2*b1;
		long long b = b1*b2;
		F(a,b);
		printf("\n");
	}
	else if(ch=='-')
	{
		long long a = a1*b2 - a2*b1;
		long long b = b1*b2;
		F(a,b);
		printf("\n");
	}
	else if(ch=='*')
	{
		long long a = a1*a2;
		long long b = b1*b2;
		F(a,b);
		printf("\n");
	}
	else{
		long long a = a1*b2;
		long long b = a2*b1;
		if(b<0)
		{
			a = -a;
			b = -b;
		}
		F(a,b);
		printf("\n");
	}
}
int main()
{
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	Print(a1, b1, a2, b2, '+');
	Print(a1, b1, a2, b2, '-');
	Print(a1, b1, a2, b2, '*');
	Print(a1, b1, a2, b2, '/');
	return 0;
}
