#include<iostream>
using namespace std;
bool su(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int m, n, c=0, j=0;
	scanf("%d %d", &m, &n);
	for(int i=2; ; i++)
	{
		if(su(i))
		{
			c++;
			if((j+1)%10!=1) printf(" ");
			if(c>=m)
			{
				printf("%d", i);
				j++;
				if(j%10==0) printf("\n");
			}
			if(c>=n) break;
		}
	}
	return 0;
}
