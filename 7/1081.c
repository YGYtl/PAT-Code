#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	char a[100001];
	int i, j;
	int su=0, zu=0, k, l;
	for(i=0; i<n; i++)
	{
		gets(a);
		su = 0;
		zu = 0;
		k = 0;
		for(j=0; a[j]!='\0'; j++)
		{
			if(a[j]>='0'&&a[j]<='9')
			{
				su++;
			}
			else if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
			{
				zu++;
			}
			else if(a[j]=='.')
			{
				k++;
			}
		}
		l = su + zu + k;

		if(j<6)
		{
			printf("Your password is tai duan le.\n");
		}
		else if(j>=6&&l==j)
		{
			if(su==0)
			{
				printf("Your password needs shu zi.\n");
			}
			else if(zu==0)
			{
				printf("Your password needs zi mu.\n");
			}
			else{
				printf("Your password is wan mei.\n");
			}
		}
		else if(j>=6&&l<j){
			printf("Your password is tai luan le.\n");
		}
	}
	return 0;
}