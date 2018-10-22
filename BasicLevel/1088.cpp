#include<iostream>
#include<cmath>
using namespace std;
int f(int n)
{
	int sum = 0;
	while(n)
	{
		sum = sum*10 + n%10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int m, x, y;
	int a=-1, b=-1, c=-1;
	scanf("%d %d %d", &m, &x, &y);
	for(int i=99; i>=10; i--)//Ã¶¾Ù ¼× 
	{
		if(abs(i-f(i))*y==f(i)*x)
		{
			a = i;
			b = f(i);
			break;
		}
	}
	if(a!=-1)
	{
		c = b/y;
		printf("%d", a);
		if(a>m) printf(" Cong");
		else if(a==m) printf(" Ping");
		else printf(" Gai");
		
		if(b>m) printf(" Cong");
		else if(b==m) printf(" Ping");
		else printf(" Gai");
		
		if(c>m) printf(" Cong");
		else if(c==m) printf(" Ping");
		else printf(" Gai");
	}
	else
	{
		printf("No Solution\n");
	}
	return 0;
}
