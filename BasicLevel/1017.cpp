#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[1001];
	int b, r;
	int k;
	scanf("%s %d", a, &b);
	for(int i=0; i<strlen(a); i++)
	{
		if(i==0)
		{
			k = a[i]-'0';
			if(k>=b)
			{
				printf("%d", k/b);
				k = k%b;
			}
		}
		else
		{
			k = a[i]-'0'+k*10;
			if(k>=b)
			{
				printf("%d", k/b);
				k = k%b;
			}
			else printf("0");
		}
	}
	r = k%b;
	printf(" %d\n", r);
	return 0;
}
