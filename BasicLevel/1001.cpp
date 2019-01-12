#include<iostream>
using namespace std;
int main()
{
	int n, c = 0;
	scanf("%d", &n);
	while(n!=1)
	{
		if(n%2==0)
		{
			n /= 2;
		}
		else{
			n = (3*n+1)/2;
		}
		c++;
	}
	printf("%d\n", c);
	return 0;
}
