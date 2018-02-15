#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, a, b;
	float max=0, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		sum = 0;
		scanf("%d %d", &a, &b);
		sum = a*a + b*b;
		sum = pow(sum, 0.5);
		if(max<sum) max = sum;
	}
	printf("%.2f", max);
	return 0;
}