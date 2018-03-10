#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int n;
	n = ((b-a) + 50) / 100;
	int hh, mm, ss;
	hh = n / 3600;
	n = n%3600;
	mm = n/60;
	ss = n%60;
	printf("%02d:%02d:%02d", hh, mm, ss);
	return 0;
}