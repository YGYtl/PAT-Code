#include<stdio.h>
int main()
{
	char ch1[100], ch2[100], ch3[100];
	gets(ch1);
	gets(ch2);
	int i1, i2, j, k, count;
	i1=0, i2=0, count=0;
	for(i1=0; ch1[i1]!='\0'; i1++)
	{
		if(ch1[i1]!=ch2[i2])
		{
			ch3[count] = ch1[i1];
			count++;
			continue;
		}
		i2++;
	}
	for(i1=0; i1<count; i1++)
	{
		if(ch3[i1]>='a'&&ch3[i1]<='z')
		{
			ch3[i1] = ch3[i1]-32;
		}
	}
	printf("%c", ch3[0]);
	for(i1=1; i1<count; i1++)
	{
		k=0;
		for(j=0; j<i1; j++)
		{
			if(ch3[i1]==ch3[j])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			printf("%c", ch3[i1]);
		}
	}
	return 0;
}