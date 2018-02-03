#include<stdio.h>
int f(int k);
int main()
{
	int a, b, o=0, m=2, c=0, i, oo;
	scanf("%d %d", &a, &b);
	int n[1000] = {'\0'};
	while(o<b)
	{
		if(f(m)==1)
		{
			o++;
			if(o>=a)
			{
				n[c] = m;
				c++;
			}
		}
		m++;
	}
	o = 0;
	for(i=0; i<=b-a; i++)
	{
		o++;
		if(o%10!=1)
		{
			printf(" ");
		}
		printf("%d", n[i]);
		if(o%10==0)
		{
			printf("\n");
		}
	}
	return 0;
}

int f(int k)
{
	int i;
	for(i=2; i*i<=k; i++)
	{
		if(k%i==0)
		{
			return 0;
		}
	}
	return 1;
}