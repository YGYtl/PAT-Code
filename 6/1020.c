#include<stdio.h>
struct student{
	double a;
	double b;
	double c;
}data[1100];
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i, k;
	int p1, p2, o1, o2;
	double p3, sum=0.0;
	for(i=0; i<n; i++)
	{
		scanf("%lf", &data[i].a);
	}
	for(i=0; i<n; i++)
	{
		scanf("%lf", &data[i].b);
	}
	for(i=0; i<n; i++)
	{
		data[i].c = data[i].b/data[i].a;
	}
	
	for(k=1; k<n; k++)
	{
		for(i=0; i<n-k; i++)
		{
			if(data[i].c<data[i+1].c)
			{
				p3 = data[i].c;
				data[i].c = data[i+1].c;
				data[i+1].c = p3;
				
				p1 = data[i].a;
				data[i].a = data[i+1].a;
				data[i+1].a = p1;
				
				p2 = data[i].b;
				data[i].b = data[i+1].b;
				data[i+1].b = p2;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		if(data[i].a<=m)
		{
			sum += data[i].b;
		}
		else{
			sum += data[i].c*m;
			break;
		}
		m -= data[i].a;
	}
	printf("%.2f\n", sum);
	
	return 0;
}