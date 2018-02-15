#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, s, r=0, c=0, o;
	char a[1005][1000]={'\0'};
	char b[21]={'\0'};
	int i, j;
	scanf("%d %d %d", &m, &n, &s);
	s--;
	for(i=0; i<m; i++)
	{
		scanf("%s", b);
		if(i==s+c*n+r)
		{
			o = 1;
			for(j=0; j<c&&o; j++)
			{
				if(!strcmp(a[j],b))
				{
					o = 0;
					r++;
					break;
				}
			}
			if(o) strcpy(a[c++], b);
		}
	}
	for(i=0; i<c; i++) printf("%s\n", a[i]);
	if(!o) printf("Keep going...");
	return 0;
}