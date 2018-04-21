#include<cstdio>
char f(int n);
int main()
{
	int n;
	printf("#");
	for(int i=0; i<3; i++)
	{
		scanf("%d", &n);
		printf("%c%c", f(n/13), f(n%13));
	}
	return 0;
}
char f(int n)
{
	if(n<10) return n+'0';
	else return n-10+'A';
}