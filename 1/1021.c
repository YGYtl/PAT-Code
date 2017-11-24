#include<stdio.h>
int main()
{
	char number[1000], g, s[10] = {0}, i;
	scanf("%s", &number);
	g = 0;
	char *p = number;
	while(*p!='\0')
	{
		s[*p-'0']++;
		p++;
	}
	for(i=0; i<10; i++)
	{
		if(s[i]!=0)
		{
			printf("%d:%d\n", i, s[i]);
		}
	}
	return 0;
}