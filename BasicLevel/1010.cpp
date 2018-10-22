#include<iostream>
using namespace std;
int main()
{
	int f = 0;
	int a, b;
	while(~scanf("%d%d", &a, &b))
	{
		if(f==0&&b==0) printf("0 0");
		else if(b!=0)
		{
			if(f==1) printf(" ");
			printf("%d %d", a*b, b-1);
			f = 1;
		}
	}
	return 0;
}
