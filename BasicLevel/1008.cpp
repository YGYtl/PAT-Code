#include<iostream>
using namespace std;
int main()
{
	int n, k, a[1001], f=0;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	k = k%n;
	int c = n - k;
	for(int i=c; i<n; i++)
	{
		if(f==1) printf(" ");
		printf("%d", a[i]);
		f = 1;
	}
	for(int i=0; i<c; i++)
	{
		if(f==1) printf(" ");
		printf("%d", a[i]);
		f = 1;
	}
	return 0;
}
