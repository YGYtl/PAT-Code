#include<iostream>
using namespace std;
int gcd(int a, int b)//最大公因数 
{
	int n = a%b;
	while(n)
	{
		a = b;
		b = n;
		n = a%b;
	}
	return b;
}
int main()
{
	int n1, m1, n2, m2, k, c=1;
	int g = 0;
	double k1, k2;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	k1 = (n1*1.0)/m1; k2 = (n2*1.0)/m2;
	if(k1>k2)
	{
		double o1 = k1;
		k1 = k2;
		k2 = o1;
	}
	while((c*1.0)/k<k2)
	{
		if((c*1.0)/k>k1)
		{
			
			if(gcd(c,k)==1)
			{
			  if(g == 1) printf(" ");
				if(k==1) printf("%d", c);
				else printf("%d/%d", c, k);
				g = 1;
			}
		}
		c++;
	}
	printf("\n");
	return 0;
}
