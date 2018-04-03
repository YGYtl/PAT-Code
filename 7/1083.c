#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, k, oo=0, p=0, c=0, j;
	int a[10001]={'\0'};
	int b[10001]={'\0'};
	for(i=1; i<=n; i++)
	{
		scanf("%d", &k);
		p = 0;
		oo = k - i;
		if(oo<0) oo = oo*(-1);
		b[oo]++;
		for(j=0; j<c; j++)
		{
			if(a[j]==oo)
			{
				p = 1;
				break;
			}
		}
		if(p==0) a[c++] = oo;
	}
	for(i=1; i<c; i++)
	{
		for(j=0; j<c-i; j++)
		{
			if(a[j]<a[j+1])
			{
				p = a[j];
				a[j] = a[j+1];
				a[j+1] = p;
			}
		}
	}
	for(i=0; i<c; i++)
	{
		if(b[a[i]]>1)
		{
			printf("%d %d\n", a[i], b[a[i]]);
		}
	}
	return 0;
}