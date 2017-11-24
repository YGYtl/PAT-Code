#include<stdio.h>
int main()
{
	int n, i, k, j, y;
	int ja, jh, ya, yh;
	j = 0;
	y = 0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d %d %d", &ja, &jh, &ya, &yh);
		if(ja+ya==jh&&ja+ya!=yh)
		{
			y++;
		}
		else if(ja+ya!=jh&&ja+ya==yh)
		{
			j++;
		}
	}
	printf("%d %d", j, y);
	return 0;
}