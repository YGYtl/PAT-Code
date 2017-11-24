#include<stdio.h>
struct students{
	char xh[1000][15];
	int sh[1000];
	int zh[1000];
};

int main()
{
	struct students s;
	int n, i, M, a[1000] = {0}, k, m, o;
	i=0;
	scanf("%d", &n);
	o = n;
	while(n!=0)
	{
		scanf("%s %d %d", &s.xh[i], &s.sh[i], &s.zh[i]);
		i++;
		n--;
	}
	scanf("%d", &M);
	i=0;
	while(M!=0)
	{
		scanf("%d", &a[i]);
		i++; 
		M--;
	}
	k = i;
	i = 0;
	m = 0;
	for(i=0; i<k; i++)
	{
		for(m=0; m<o; m++)
		{
			if(a[i]==s.sh[m])
			{
				printf("%s %d\n", s.xh[m], s.zh[m]);
			}
		}
	}
	return 0;
}