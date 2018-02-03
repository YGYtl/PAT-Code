#include<stdio.h>
int main()
{
	int n, m, i, sum=1, sum1=1;
	char x;
	scanf("%d %c", &n, &x);
	int j, k, mk=1, mmk=1;
	for(i=3; i<n; i+=2)
	{
		sum1 = sum1 + i*2;
		if(sum1<n)
		{
			sum = sum1;
			mk = i;
		}
	}
	mmk = mk;
	for(i=0; i<(mk+1)/2; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=0; j<mmk; j++)
		{
			printf("%c", x);
		}
		mmk -= 2;
		printf("\n");
	}
	mmk = 3;
	for(i=((mk+1)/2)-2; i>=0; i--)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=0; j<mmk; j++)
		{
			printf("%c", x);
		}
		mmk+=2;
		printf("\n");
	}
	printf("%d", n-sum);
	return 0;
}