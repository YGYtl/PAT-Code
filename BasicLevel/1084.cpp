#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[100001]={'\0'};
	int b[100001]={'\0'};
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int d, n;
	int c1 = 0, c2 = 0, c = 0, k;
	scanf("%d %d", &d, &n);
	a[c1++] = d;
	for(int i=0; i<n-1; i++)
	{
		c = 1;
		for(int j=0; j<c1; j++)
		{
			if(j==0) k = a[j];
			else
			{
				if(a[j]==k) c++;
				else
				{
					b[c2++] = k;
					b[c2++] = c;
					k = a[j];
					c = 1;
				}
			}
		}
		b[c2++] = k;
		b[c2++] = c;
		for(int j=0; j<c1; j++) a[j] = 0;
		for(int j=0; j<c2; j++)
		{
			a[j] = b[j];
			b[j] = 0;
		}
		c1 = c2;
		c2 = 0;
	}
	for(int i=0; i<c1; i++) printf("%d", a[i]);
	return 0;
}
