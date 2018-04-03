#include<cstdio>
using namespace std;
int main()
{
	char h, a[10005]={0};
	int e;
	scanf("%c%c.%[0-9]E%d", &h, &a[0], a+1, &e);
	if(h=='-') printf("-");
	if(e>=0)
	{
		for(int i=0; i<e+1||a[i]!=0; i++)
		{
			if(i==e+1) printf(".");
			if(a[i]!=0) printf("%c", a[i]);
			else printf("0");
		}
	}
	else{
		printf("0.");
		for(int i=1; i<(-e); i++)
			printf("0");
		printf("%s", a);
	}
	printf("\n");
	return 0;
}