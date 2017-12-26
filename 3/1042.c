#include<stdio.h>
int main()
{
	char a[1000];
	char b[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
	'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int b2[30] = {0}, max;
	gets(a);
	int i, j;
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			if(a[i]>='A'&&a[i]<='Z')
			{
				a[i] = a[i] + 32;
			}
			for(j=0; j<26; j++)
			{
				if(a[i]==b[j])
				{
					break;
				}
			}
			b2[j]++;
		}
	}
	max = b2[0];
	for(i=1; i<26; i++)
	{
		if(b2[i]>max)
		{
			max = b2[i];
		}
	}
	for(i=0; i<26; i++)
	{
		if(b2[i]==max)
		{
			printf("%c %d", b[i], b2[i]);
			break;
		}
	}
	return 0;
}