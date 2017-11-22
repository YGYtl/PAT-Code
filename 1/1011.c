#include<stdio.h>
int main()
{
	int n, i;
	long long A, B, C;
	i = 1;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lld %lld %lld", &A, &B, &C);
		if(A+B>C)
		{
			printf("Case #%d: true\n", i);
		}
		else{
			printf("Case #%d: false\n", i);
		}
		i++;
	}
	return 0;
}