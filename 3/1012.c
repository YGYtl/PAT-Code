#include<stdio.h>
int main()
{
    int n, k, y=0, count=0, c=0;
    int A1=0, A2=0, A3=0, A5=-1;
    double A4=0.0;
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &k);
        if(k%5==0&&k%2==0) A1 += k;
		else if(k%5==1&&c==0)
		{
			A2 += k;
			c = 1;
			y = 1;
		}
		else if(k%5==1&&c==1)
		{
			A2 -= k;
			c = 0;
			y = 1;
		}
		else if(k%5==2) A3 += 1;
		else if(k%5==3)
		{
			count ++;
			A4 += k;
		}
		else if(k%5==4&&k>A5) A5 = k;
    }
    if(A1!=0) printf("%d", A1);
    else printf("N");
 	if(y==1) printf(" %d", A2);
    else printf(" N");
    if(A3!=0) printf(" %d", A3);
    else printf(" N");
    if(count!=0) printf(" %.1f", A4*1.0/count);
    else printf(" N");
    if(A5!=-1) printf(" %d", A5);
    else printf(" N");
    return 0;
}
