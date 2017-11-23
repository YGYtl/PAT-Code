#include<stdio.h>
#include<math.h>
int main()
{
	int A, DA, B, DB;
	scanf("%d %d %d %d", &A, &DA, &B, &DB);
	int i, count1, count2, k, d, sum1, sum2, sum;
	sum1 = 0;
	sum2 = 0;
	count1 = 0;
	count2 = 0;
	while(A!=0)
	{
		d = A%10;
		if(d==DA)
		{
			count1++;
		}
		A = A / 10;
	}
	k = 0;
	while(B!=0)
	{
		d = B%10;
		if(d==DB)
		{
			count2++;
		}
		B = B / 10;
	}
	while(count1!=0)
	{
		sum1 = sum1 + DA*pow(10,count1-1);
		count1--;
	}
	while(count2!=0)
	{
		sum2 = sum2 + DB*pow(10,count2-1);
		count2--;
	}
	sum = sum1 + sum2;
	printf("%d", sum);
	return 0;
}