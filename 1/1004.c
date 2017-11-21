#include <stdio.h>
#include <stdlib.h>
struct student{
		char name[10][10];
		char xuehao[10][10];
		int s[100];
	};
int main()
{
	int r, max, min, j, k, m;
	max = 0, min = 0, j = 0, k = 0;
	scanf("%d", &r);
	struct student students[1000];
	int i;
	for(i=0; i<r; i++)
	{
		scanf("%s", &students[i].name[i]);
		scanf("%s", &students[i].xuehao[i]);
		scanf("%d", &students[i].s[i]);
	}
	max = students[0].s[0];
	min = students[0].s[0];
	for(i=1; i<r; i++)
	{
		if(students[i].s[i]>max)
		{
			max = students[i].s[i];
			j = i;
		}
		if(students[i].s[i]<min)
		{
			min = students[i].s[i];
			k = i;
		}
	}
	printf("%s %s\n", students[j].name[j], students[j].xuehao[j]);
	printf("%s %s", students[k].name[k], students[k].xuehao[k]);
	return 0;
}