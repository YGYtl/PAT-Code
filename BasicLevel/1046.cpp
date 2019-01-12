#include<iostream>
using namespace std;
int main()
{
	int n, s1=0, s2=0;
	int j1, j2, k1, k2;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d", &j1, &j2, &k1, &k2);
		int k = j1 + k1;//º°ÊýÖ®ºÍ
		if((j2==k&&k2==k)||(j2!=k&&k2!=k)) continue;
		if(j2==k) s2++;
		if(k2==k) s1++;
	}
	printf("%d %d\n", s1, s2);
	return 0;
}
