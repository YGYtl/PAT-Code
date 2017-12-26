#include<stdio.h>
int main()
{
	char a[10000];
	gets(a);
	int b[6] = {0};
	int i;
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='P')
		{
			b[0]++;
		}
		else if(a[i]=='A')
		{
			b[1]++;
		}
		else if(a[i]=='T')
		{
			b[2]++;
		}
		else if(a[i]=='e')
		{
			b[3]++;
		}
		else if(a[i]=='s')
		{
			b[4]++;
		}
		else if(a[i]=='t')
		{
			b[5]++;
		}
	}
	while(1)
	{
		if(b[0]!=0)
		{
			printf("%c", 'P');
			b[0]--;
		}
		if(b[1]!=0)
		{
			printf("%c", 'A');
			b[1]--;
		}
		if(b[2]!=0)
		{
			printf("%c", 'T');
			b[2]--;
		}
		if(b[3]!=0)
		{
			printf("%c", 'e');
			b[3]--;
		}
		if(b[4]!=0)
		{
			printf("%c", 's');
			b[4]--;
		}
		if(b[5]!=0)
		{
			printf("%c", 't');
			b[5]--;
		}
		if(b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0&&b[4]==0&&b[5]==0)
		{
			break;
		}
	}
	return 0;
}