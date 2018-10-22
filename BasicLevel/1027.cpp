#include<iostream>
using namespace std;
int main()
{
	int n, c=0;
	int f, sum, index;
	char x;
	scanf("%d %c", &n, &x);
	if(n==1)
	{
		printf("%c\n", x);
		printf("0\n");
		return 0;
	}
	for(int i=1; sum<n; i+=2)
	{
		if(i==1) sum = i;
		else sum += i*2;
		index = i;
	}
	c = n - (sum - index*2);
	int k = index - 2;
	int o = 0;
	for(int i=k; i>=1; i-=2)
	{
		for(int j=0; j<o; j++) printf(" ");
		for(int j=0; j<i; j++) printf("%c", x);
		printf("\n");
		o++;
	}
	o-=2;
	for(int i=3; i<=k; i+=2)
	{
		for(int j=0; j<o; j++) printf(" ");
		for(int j=0; j<i; j++) printf("%c", x);
		printf("\n");
		o--;
	}
	printf("%d\n", c);
	return 0;
}
