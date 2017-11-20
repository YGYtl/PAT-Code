#include <stdio.h>
#include <math.h>
int main()
{
	char h;
	int sum = 0, y, x, j, k;
	x = 0;
	char a[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	while((h = getchar())!='\n')
	{
		sum = h - '0' + sum;
	}
	j = sum;
	if(j!=0)
	{
		while(j!=0)
		{
			x++;
			j = j/10;
		}
		j = pow(10,x-1);
		while(j!=0)
		{
			k = sum/j;
			printf("%s", a[k]);
			sum = sum%j;
			j = j/10;
			if(j!=0)
			{
				printf(" ");
			 } 
		}
	}
	else{
		printf("%s", a[j]);
	}
	return 0;
}