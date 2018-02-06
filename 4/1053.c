#include<stdio.h>
int main()
{
	int n, i, j, k, o, tim;
	double nn, mm;
	int c1=0, c2=0, s1=0;
	scanf("%d %lf %d", &n, &nn, &tim);
	for(i=0; i<n; i++)
	{
		scanf("%d", &o);
		s1=0;
		for(j=0; j<o; j++)
		{
			scanf("%lf", &mm);
			if(mm<nn)
			{
				s1++;
			}
		}
		
		if(o>tim)
		{
			if(o%2!=0) o = o - 1;
			if(s1>o/2) c2++;
		}
		else if(o<=tim)
		{
			if(o%2!=0) o = o - 1;
			if(s1>o/2) c1++;
		}
	}
	nn = (double)c1/i*100;
	mm = (double)c2/i*100;
	printf("%.1f%% %.1f%%", nn, mm);
	return 0;
}