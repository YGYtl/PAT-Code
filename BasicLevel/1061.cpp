#include<iostream>
using namespace std;
struct data{
	int score;
	int f;
}a[101];
int main()
{
	int n, m, k;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++) scanf("%d", &a[i].score);
	for(int i=0; i<m; i++) scanf("%d", &a[i].f);
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<m; j++)
		{
			scanf("%d", &k);
			if(a[j].f==k) sum += a[j].score;
		}
		printf("%d\n", sum);
	}
	return 0;
}
