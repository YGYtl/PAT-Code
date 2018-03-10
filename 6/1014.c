#include<stdio.h>
#include<string.h>
int main()
{
	char a1[100], a2[100], a3[100], a4[100];
	char time[30] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
	'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N'};
	char ch1, ch2;
	gets(a1);
	gets(a2);
	gets(a3);
	gets(a4);
	int i, l1, l2, l3, l4;
	l1 = strlen(a1);
	l2 = strlen(a2);
	for(i=0; i<l1&&i<l2; i++)
	{
		if(a1[i]==a2[i]&&a1[i]>='A'&&a1[i]<='G')
		{
			ch1 = a1[i];
			break;
		}
	}
	for(i=i+1; i<l1&&i<l2; i++)
	{
		if(a1[i]==a2[i]&&((a1[i]>='A'&&a1[i]<='N')||(a1[i]>='0'&&a1[i]<='9')))
		{
			ch2 = a1[i];
			break;
		}
	}
	switch(ch1){
         case 'A' : printf("MON "); break;
         case 'B' : printf("TUE "); break;
         case 'C' : printf("WED "); break;
         case 'D' : printf("THU "); break;
         case 'E' : printf("FRI "); break;
         case 'F' : printf("SAT "); break;
         case 'G' : printf("SUN "); break;
	}
	for(i=0; time[i]!='\0'; i++)
	{
		if(time[i]==ch2)
		{
			printf("%02d:", i);
			break;
		}
	}
	l3 = strlen(a3);
	l4 = strlen(a4);
	for(i=0; i<l3&&i<l4; i++)
	{
		if(a3[i]==a4[i]&&((a3[i]>='a'&&a3[i]<='z')||(a3[i]>='A'&&a3[i]<='Z')))
		{
			printf("%02d", i);
			break;
		}
	}
	return 0;
}