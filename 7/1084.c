#include<stdio.h>
int main()
{
	int n, d;
	int i=0, k=0, c=0, oo=0;
	scanf("%d %d", &d, &n);
	
	int a[100001]={'\0'};
	int b[100010]={'\0'};
	
	a[0] = d;
	n--;
	while(n--)
	{
		k = a[0];
		c = 0;
		oo = 0;
		for(i=0; a[i]!='\0'; i++)
		{
			if(k==a[i])
			{
				c++;	
			}
			else{
				b[oo] = k;
				oo++;
				b[oo] = c;
				oo++;
				k = a[i];
				c = 1;
			}
		}
		b[oo] = k;
		oo++;
		b[oo] = c;
		oo++;
		for(i=0; b[i]!='\0'; i++)
		{
			a[i] = b[i];
		}
	}
	for(i=0; a[i]!='\0'; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}