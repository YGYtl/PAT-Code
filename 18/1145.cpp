#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
bool p_num(int n)
{
	if(n<=1||(n%2==0&&n!=2)) return false;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int msize, n, m, k, c = 0;
	scanf("%d %d %d", &msize, &n, &m);
	while(p_num(msize)==false) msize++;
	int a[msize]={'\0'};
	memset(a,-1,sizeof(a));
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		bool flag = false;
		for(int j=0; j<msize; j++)
		{
			int d = j*j;
			int tid = ((k%msize)+d)%msize;
			if(a[tid]==-1)
			{
				flag = true;
				a[tid] = k;
				break;
			}
		}
		if(flag == false) printf("%d cannot be inserted.\n", k);
	}
	
	for(int i=0; i<m; i++)
	{
		scanf("%d", &k);
		bool flag = false;
		for(int j=0; j<msize; j++)
		{
			c++;
			int d = j*j;
			int tid = ((k%msize)+d)%msize;
			if(a[tid]==-1||a[tid]==k)
			{
				flag = true;
				break;
			}
		}
		if(flag == false) c++;
	}
	printf("%.1f\n", c*1.0/m);
	return 0;
}
