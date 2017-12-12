#include<stdio.h>
int main()
{
	int sum, count, max, min, count1, o1, o2, G2, sum1, G1;
	sum = 0;
	int i, s, p, j, k, m[200][200], n[200][200];
	scanf("%d %d", &s, &p);
	for(j=0; j<s; j++)
	{
		count = 0;
		G2 = 0.0;
		count1 = 0, sum = 0, sum1 = 0.0;
		o1 = 0, o2 = 0;
		for(k=0; k<s; k++)
		{
			scanf("%d", &m[j][k]);
			if(m[j][k]>=0&&m[j][k]<=p)
			{
				n[j][count] = m[j][k];
				count++;
			}
		}
		G1 = n[j][0];
		max = n[j][1];
		min = n[j][1];
		for(k=2; k<count; k++)
		{
			if(max<n[j][k])
			{
				max = n[j][k];
			}
			if(min>n[j][k])
			{
				min = n[j][k];
			}
		}

		for(k=1; k<count; k++)
		{
			if(n[j][k]==max&&o1!=1)
			{
				o1=1;
				n[j][k] = 0;
				count1--;
			}
			if(n[j][k]==min&&o2!=2)
			{
				o2=2;
				n[j][k] = 0;
				count1--;
			}
			G2 = G2+n[j][k];
			count1++;
		}
		sum1 = G2/count1;
		sum = (G1+sum1)/2;
		if((sum1+G1)%2!=0)
		{
			sum = sum + 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}