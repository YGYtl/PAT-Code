#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int f(int k, int o);
int main()
{
	char c;
	char g[36] = {'0','1','2','3','4','5','6','7','8','9','a',
	'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
	'q','r','s','t','u','v','w','s','y','z'};
	int sum1 = 0, sum2 = 0, k=2, i, radix;
	int j, sum, cc, o;
	while(k--)
	{
		if(k==1)
		{
			scanf("%c", &c);
			while(c!=' ')
			{
				for(i=0; i<35; i++)
				{
					if(c==g[i]) break;
				}
				sum1 = sum1*10 + i;
				scanf("%c", &c);
			}
		}
		else
		{
			scanf("%c", &c);
			while(c!=' ')
			{
				for(i=0; i<35; i++)
				{
					if(c==g[i]) break;
				}
				sum2 = sum2*10 + i;
				scanf("%c", &c);
			}
		}
	}
	scanf("%d %d", &k, &radix);
	if(k==1)
	{
		sum1 = f(sum1,radix);
		for(j=1; j<sum2; j++)
		{
			cc = sum2;
			sum = 0;
			o = 0;
			while(cc)
			{
				sum += cc%10*pow(j,o);
				o++;
				cc /= 10;
			}
			if(sum == sum1)
			{
				printf("%d\n", j);
				return 0;
			}
		}
		
	}
	else{
		sum2 = f(sum2,radix);
		for(j=1; j<sum1; j++)
		{
			cc = sum1;
			sum = 0;
			o = 0;
			while(cc)
			{
				sum += cc%10*pow(j,o);
				o++;
				cc /= 10;
			}
			if(sum == sum2)
			{
				printf("%d\n", j);
				return 0;
			}
		}
	}
	printf("Impossible\n");
	return 0;
}

int f(int k, int o)
{
	int sum = 0;
	for(int i=0; k; i++)
	{
		sum += k%10*pow(o,i);
		k /= 10;
	}
	return sum;
}
