#include<stdio.h>
int main()
{
	int h, l, a, b, t;
	scanf("%d %d %d %d %d", &h, &l, &a, &b, &t);
	int i, k, o[500][500] = {0};
	for(i=0; i<h; i++)
	{
		for(k=0; k<l; k++)
		{
			scanf("%d", &o[i][k]);
		}
	}
	for(i=0; i<h; i++)
	{
		for(k=0; k<l; k++)
		{
			if(o[i][k]>=a&&o[i][k]<=b)
			{
				if(k==(l-1))
				{
					printf("%.3d", t);
				 }
				 else{
				 	printf("%.3d ", t);
				 }
			}
			else{
				if(k==(l-1))
				{
					printf("%.3d", o[i][k]);
				}
				else{
					printf("%.3d ", o[i][k]);
				}
			}
		}
		printf("\n");
	}

	return 0;
}