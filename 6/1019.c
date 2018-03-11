#include<stdio.h>
int print(int o);
int main()
{
	int o;
	scanf("%d", &o);
	o = print(o);
	while(o!=6174&&o!=0)
	{
		o = print(o);
	}
	return 0;
}

int print(int o)
{
	int mx=0, mi=0, k, j, i, c;
	int a[5]={'\0'};
	int b[5]={'\0'};
	c = 0;
	for(c=0; c<4; c++)
	{
		k = o%10;
		o = o / 10;
		a[c] = k;
	}
	for(j=1; j<c; j++)
	{
		for(i=0; i<c-j; i++)
		{
			if(a[i]<a[i+1])
			{
				o = a[i];
				a[i] = a[i+1];
				a[i+1] = o;
			}
		}
	}
	o = 0;
	for(i=c-1; i>=0; i--)
	{
		b[o] = a[i];
		o++;
	}
	for(i=0; i<c; i++)
	{
		mx = mx*10 + a[i];
		mi = mi*10 + b[i];
	}
	o = mx - mi;
	printf("%04d - %04d = %04d\n", mx, mi, o);
	return o;
}