#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
using namespace std;
int a[1001][1001];
int m, n, top, c=0;
map<int,int> mm;
bool judge(int i,int j){
    if(i>=1)
        if(abs(a[i][j]-a[i-1][j])<=top)
            return false;

    if(i<=n-2)
        if(abs(a[i][j]-a[i+1][j])<=top)
            return false;

    if(j>=1)
        if(abs(a[i][j]-a[i][j-1])<=top)
            return false;

    if(j<=m-2)
        if(abs(a[i][j]-a[i][j+1])<=top)
            return false;

    if(i>=1&&j>=1)
        if(abs(a[i][j]-a[i-1][j-1])<=top)
            return false;

    if(i>=1&&j<=m-2)
        if(abs(a[i][j]-a[i-1][j+1])<=top)
            return false;

    if(i<=n-2&&j>=1)
        if(abs(a[i][j]-a[i+1][j-1])<=top)
            return false;
            
    if(i<=n-2&&j<=m-2)
        if(abs(a[i][j]-a[i+1][j+1])<=top)
            return false;
    return true;
}
int main()
{
	int x=0, y=0, max=-1, k;
	scanf("%d %d %d", &m, &n, &top);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
			mm[a[i][j]]++;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(judge(i,j)&&mm[a[i][j]]==1)
			{
				x = i+1;
				y = j+1;
				max = a[i][j];
				c++;
				if(c==2) break;
			}
		}
		if(c==2) break;
	}
	if(c==1) printf("(%d, %d): %d\n", y, x, max);
	else if(c==2) printf("Not Unique\n");
	else if(c==0)printf("Not Exist\n");
	return 0;
}