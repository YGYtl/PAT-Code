#include<iostream>
#include<cstdio>
using namespace std;
char b[100][80];
int main()
{
	char a[100];
	gets(a);
	int c = 0, j = 0;
	for(int i=0; a[i]!='\0'; i++)
	{
		if(a[i]==' ')
		{
			c++;
			j = 0;
			continue;
		}
		b[c][j++] = a[i];
	}
	for(int j=c; j>=0; j--)
	{
		if(j!=c) printf(" ");
		printf("%s", b[j]);
	}
	return 0;
}
