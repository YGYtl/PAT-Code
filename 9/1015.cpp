#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool sushu(int n);
int number(int n, int d);
int main()
{
	int n, d, k;
	cin >> n;
	while(n>=0)
	{
		cin >> d;
		k = number(n,d);
		if(sushu(n)==true&&sushu(k)==true)
		{
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		cin >> n;
	}
	return 0;
}
bool sushu(int n)
{
	int i;
	if(n<2) return false;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int number(int n, int d)
{
	int sum = 0;
	while(n!=0)
	{
		sum = sum * d + n%d;
		n = n / d;
	}
	return sum;
}
