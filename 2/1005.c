#include<stdio.h>
int main()
{
	int s;
	scanf("%d", &s);
	int a[200], b[200][200] = {'\0'}, c[200], i, count, o, u;
	count = 0;
	for(i=0; i<s; i++)
	{
		scanf("%d", &a[i]);
	}
	int k, j, m, n;
	i = 0;
	for(k=0; k<s; k++)
	{
		m = a[i];
		count = 0;
		for(j=0; m>1; j++)
		{
			if(m%2==0)
			{
				m = m/2;
				b[i][count] = m;
			}
			else{
				m = (3*m+1)/2;
				b[i][count] = m;
			}
			count++;
		}
		i++;
	}
	
	count = 0;
	for(i=0; i<s; i++)
	{
		m = 1;
		for(j=0; j<s; j++)
		{
			for(k=0; b[j][k]!='\0'; k++)
			{
				if(a[i]==b[j][k])
				{
					m=0;
					break;
				}
			}
			if(m==0)
			{
				break;
			} 
		}
		if(m==1)
		{
			c[count] = a[i];
			count++;
		}
	}

	
	for(i=1; i<count; i++)
	{
		for(k=0; k<count-i; k++)
		{
			if(c[k]<c[k+1])
			{
				o = c[k];
				c[k] = c[k+1];
				c[k+1] = o;
			}
		}
	}
	for(i=0; i<count; i++)
	{
		printf("%d", c[i]);
		if(i!=count-1)
		{
			printf(" ");
		}
	}
	
	return 0;
}