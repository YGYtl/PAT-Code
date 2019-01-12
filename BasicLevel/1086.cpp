#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a*b;
	int sum = 0;
	while(c)
	{
		sum = c%10 + sum*10;
		c /= 10;
	}
	printf("%d\n", sum);
	return 0;
}
