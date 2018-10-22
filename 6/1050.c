#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
void print(int b[][100], int h, int l);
int main()
{
    int n, a[10001]={'\0'};
    int b[100][100]={'\0'};
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    int j, k, o=0, h=n, l=1;
    for(i=2; i*i<=n; i++)//ÅÐ¶ÏÊÇ·ñÎªËØÊý 
    {
        if(n%i==0)
        {
        	l = i;
	        o = 1;
        }
    }
    if(o==1)
    {
    	h = n/l;
    	sort(a,a+n,cmp);
	    o=0, j=0, k=0;
	    b[j][k] = a[o++];
  	    while(o<n)
	    {
		    while(k+1<l&&!b[j][k+1]) b[j][++k] = a[o++];
		    while(j+1<h&&!b[j+1][k]) b[++j][k] = a[o++];
		    while(k-1>=0&&!b[j][k-1]) b[j][--k] = a[o++];
		    while(j-1>=0&&!b[j-1][k]) b[--j][k] = a[o++];
	    }
	    print(b, h, l);
    }
    else{
    	sort(a,a+n,cmp);
    	for(i=0; i<n; i++)
    	{
    		printf("%d\n", a[i]);
		}
	}
    return 0;
}

void print(int b[][100], int h, int l)
{
  int i, j;
  for(i=0; i<h; i++)
  {
        for(j=0; j<l; j++)
        {
            if(j!=0) printf(" ");
            printf("%d", b[i][j]);
        }
        printf("\n");
   }
}
