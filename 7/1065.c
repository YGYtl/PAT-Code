#include<stdio.h>
int main()
{
	int tes1[100010]={'\0'};
	int tes2[100010]={'\0'};
	int last[100010]={'\0'};
	int o[100010]={'\0'};
	int p, test=0, q, temp=0, j;
	scanf("%d", &p);
	int i, m, n, c=0, sign=0;
	for(i=0; i<p; i++)
	{
		scanf("%d %d", &m, &n);
		tes1[m] = n;
		tes2[n] = m;
	}
	scanf("%d", &test);
	for(i=0; i<test; i++)
	{
		scanf("%d", &o[i]);
	}
	for(i=0; i<test; i++)
	{
		sign=0;
		for(q=0; q<test; q++)
		{
			if(tes1[o[i]]==o[q]||tes2[o[i]]==o[q])
			{
				sign = 1;
				break;
			}
		}
		if(sign==0)
		{
			last[c++] = o[i];
		}
	}
	
	for(i=1; i<c; i++)
	{
		for(j=0; j<c-i; j++)
		{
			if(last[j]>last[j+1])
			{
				temp = last[j];
				last[j] = last[j+1];
				last[j+1] = temp;
			}
		}
	}
	printf("%d\n", c);
	for(i=0; i<c; i++)
	{
		if(i!=0) printf(" ");
		printf("%05d", last[i]);
	}
	return 0;
}