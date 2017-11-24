#include<stdio.h>
int main()
{
	int N, j, k, n;
	char C;
	scanf("%d %c", &N, &C);
	n = N;
	if(N%2!=0)
	{
		n = n+1;
	}
	for(j = 0; j<n/2; j++)
	{
		for(k=0; k<N; k++)
		{
			if(j==0||j==n/2-1)
			{
				printf("%c", C);
			}
			else{
				if(k==0||k==N-1)
				{
					printf("%c", C);
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}