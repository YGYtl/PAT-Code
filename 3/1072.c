#include<stdio.h>
#include<string.h>
struct student{
	char name[1000][4];
};
int main()
{
	struct student a;
	int n, m, r1 = 0, c1 = 0;
	int i, j, k, c, o;
	char a1[1000][10] = {'\0'}, p[1000][4] = {'\0'};
	scanf("%d %d", &n, &m);
	getchar();
	for(i=0; i<m; i++)
	{
		scanf("%s", a1[i]);
	}
	getchar();
	for(i=0; i<n; i++)
	{
		scanf("%s", a.name[i]);
		o = 1;
		scanf("%d", &c);
		for(j=0; j<c; j++)
		{
			scanf("%s", p[j]);
			for(k=0; k<m; k++)
			{
				if(strcmp(p[j],a1[k])==0)
				{
					if(o==1)
					{
						printf("%s:", a.name[i]);
						r1++;
					}
					o = 0;
					printf(" %s", p[j]);
					c1++;
				}
			}
		}
		if(o==0)
		{
			printf("\n");
		}
		getchar();
	}
	printf("%d %d", r1, c1);
	return 0;
}