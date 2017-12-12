#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int s, i, j, k;
	int count[100] = {'\0'};
	char b1[4] = "A-T", b2[4] = "B-T", b3[4] = "C-T", b4[4] = "D-T";
	k = 0;
	scanf("%d", &s);
	for(i=0; i<s; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%s", a);
			
			if(strcmp(a,b2)==0)
			{
				count[k] = 2;
			}
			if(strcmp(a,b1)==0)
			{
				count[k] = 1;
			}
			if(strcmp(a,b3)==0)
			{
				count[k] = 3;
			}
			if(strcmp(a,b4)==0)
			{
				count[k] = 4;
			}
		}
		k++;
	}
	for(i=0; i<k; i++)
	{
		printf("%d", count[i]);
	}
	return 0;
}