#include<stdio.h>
int main()
{
	char sh[2] = {'B', 'S'};
	int number, b, s, g, i;
	scanf("%d", &number);
	b = 0, s = 0, g = 0;
	if(number!=0)
	{
		g = number%10;
		number = number/10;
		s = number%10;
		number = number/10;
		b = number%10;
		number = number/10;
	}
	while(b!=0)
	{
		b--;
		printf("%c", sh[0]);
	}
	while(s!=0)
	{
		s--;
		printf("%c", sh[1]);
	}
	for(i=1; i<=g; i++)
	{
		printf("%d", i);
	}
	return 0;
 } 