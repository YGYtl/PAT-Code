#include<iostream>
using namespace std;
int main()
{
	int n, d, k;
	int c = 0, kz=0, knz=0;
	double e, E;
	scanf("%d %lf %d", &n, &e, &d);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		c = 0;
		for(int j=0; j<k; j++)
		{
			scanf("%lf", &E);
			if(E<e) c++;
		}
		if(k>d&&c>k/2) kz++;
		else if(k<=d&&c>k/2) knz++;
	}
	printf("%.1f%% %.1f%%", (knz*1.0/n)*100, (kz*1.0/n)*100);
	return 0;
}
