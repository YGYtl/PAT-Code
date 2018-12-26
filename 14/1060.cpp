#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int aaa=0, bbb=0;
int f1(double num)
{
	int c = 0;
	while(num>1e-1)
	{
		c++;
		num /= 10;
	}
	return c;
}
double f2(double num1, double num2)
{
	int m = n;
	double a, b;
	a = num1; b = num2;
	while(m--)
	{
		int k1 = int(a*10)%10;
		a = a*10;
		aaa = aaa*10 + k1;
	}
	m = n;
	while(m--)
	{
		int k2 = int(b*10)%10;
		b = b*10;
		bbb = bbb*10 + k2;
	}
	if(aaa == bbb) return aaa;
	else return -1;
}
int main()
{
	double a, b;
	scanf("%d %lf %lf", &n, &a, &b);
	double aa, bb;
	int l1 = f1(a);
	int l2 = f1(b);
	aa = a*pow(0.1,l1-1);
	bb = b*pow(0.1,l2-1);
	int k = f2(aa, bb);
	if(k==-1) printf("NO 0.%d*10^%d 0.%d*10^%d\n", aaa, l1-1, bbb, l2-1);
	else printf("YES 0.%d*10^%d\n", aaa, l1-1);
	return 0;
}
