#include<stdio.h>
int main()
{
	int n1, m1, n2, m2, k, o=0, j, count=0, i;
	int ln[1002]={'\0'};
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	double a, b, c=0, o1;
	a = n1*1.0/m1;
	b = n2*1.0/m2;
	if(a>b)
	{
		o1 = a;
		a = b;
		b = o1;
	}
	for(i=0; ; i++)
	{
		c = i*1.0/k;
		if(c>b) break;
		o = 0;
		if(c>a&&c<b)
		{
			for(j=2; j<=i; j++)
			{
				if(k%j==0&&i%j==0)
				{
					o = 1;
					break;
				}
			}
			if(o==0) ln[count++] = i;
		}
	}
	for(i=0; i<count; i++)
	{
		if(i!=0) printf(" ");
		printf("%d/%d", ln[i], k);
	}
	printf("\n");
	return 0;
}