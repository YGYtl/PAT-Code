#include<iostream>
using namespace std;
int main()
{
	int T, k;
	scanf("%d %d", &T, &k);
	int num = T;
	int n1, b, t, n2;
	for(int i=0; i<k; i++)
	{
		scanf("%d %d %d %d", &n1, &b, &t, &n2);
		if(num == 0)
		{
			printf("Game Over.\n");
			break;
		}
		if(t>num)
		{
			printf("Not enough tokens.  Total = %d.\n", num);
			continue;
		}
		if(n1>n2&&b==0||n1<n2&&b==1)
		{
			num += t;
			printf("Win %d!  Total = %d.\n", t, num);
		}
		else
		{
			num -= t;
			printf("Lose %d.  Total = %d.\n", t, num);
		}
	}
	return 0;
}
