#include<stdio.h>
int main()
{
	int T, K;
	scanf("%d %d", &T, &K);
	int n1[200], b[200], t[200], n2[200];
	int i;
	for(i=0; i<K; i++)
	{
		scanf("%d %d %d %d", &n1[i], &b[i], &t[i], &n2[i]);
	}
	for(i=0; i<K; i++)
	{
		if(T==0)
		{
			printf("Game Over.");
			return 0;
		}
		if(T<t[i])
		{
			printf("Not enough tokens.  Total = %d.\n", T);
		}
		else{
			if(n1[i]>n2[i])
			{
				if(b[i]==0)
				{
					T = T + t[i];
					printf("Win %d!  Total = %d.\n", t[i], T);
				}
				else{
					T = T - t[i];
					printf("Lose %d.  Total = %d.\n", t[i], T);
				}
			}
			else{
				if(b[i]==1)
				{
					T = T + t[i];
					printf("Win %d!  Total = %d.\n", t[i], T);
				}
				else{
					T = T - t[i];
					printf("Lose %d.  Total = %d.\n", t[i], T);
				}
			}
		}
	}
	return 0;
}