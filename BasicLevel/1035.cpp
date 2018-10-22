#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a < b;
}
int main()
{
	int n, j, k;
	scanf("%d", &n);
	int a[n+1], b[n+1];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	for(j=0; j<n-1&&b[j]<b[j+1]; j++);
	for(k=j+1; k<n&&a[k]==b[k]; k++);
	if(k==n)
	{
		printf("Insertion Sort\n");
		sort(a,a+j+2,cmp);
	}
	else
	{
		printf("Merge Sort\n");
		int f = 1, t = 1;
		while(f)
		{
			f = 0;
			for(int i=0; i<n; i++)
			{
				if(a[i]!=b[i])
				{
					f = 1; break;
				}
			}
			t = t*2;
			for(int i=0; i<n/t; i++)
			{
				sort(a+i*t,a+(i+1)*t,cmp);
			}
			sort(a+n/t*t,a+n,cmp);
		}
	}
	for(int i=0; i<n; i++)
	{
		if(i) printf(" ");
		printf("%d", a[i]);
	}
	return 0;
}
