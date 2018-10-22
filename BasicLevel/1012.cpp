#include<iostream>
using namespace std;
int main()
{
	int n, f = 1, k;
	int a1=0, a2=0, a3=0, a4=0, a5=0, c4=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &k);
		if(k%5==0&&k%2==0) a1 += k;
		if(k%5==1)
		{
			a2 += k*f;
			f = -f;
		}
		if(k%5==2) a3++;
		if(k%5==3)
		{
			a4 += k;
			c4++;
		}
		if(k%5==4&&k>a5) a5 = k;
	}
	if(a1!=0) printf("%d", a1); 
	else printf("N");
	if(a2!=0) printf(" %d", a2);
	else printf(" N");
	if(a3!=0) printf(" %d", a3);
	else printf(" N");
	if(c4!=0) printf(" %.1f", a4*1.0/c4);
	else printf(" N");
	if(a5!=0) printf(" %d", a5);
	else printf(" N");
	return 0;
}
