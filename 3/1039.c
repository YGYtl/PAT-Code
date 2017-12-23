#include<stdio.h>
int main()
{
	char str[1000];
	char str1[1000];
	int c, i, j, count = 0, m = 0;
	gets(str);
	gets(str1);
	for(i=0; str1[i]!='\0'; i++)
	{
		for(j=0; str[j]!='\0'; j++)
		{
			if(str1[i]==str[j])
			{
				str[j] = '-';
				count++;
				break;
			}
		}
	}
	for(j=0; str[j]!='\0'; j++)
	{
		m++;
	}
	if(count==i)
	{
		printf("Yes %d", m-count);
	}
	else{
		printf("No %d", i-count);
	}
	return 0;
}