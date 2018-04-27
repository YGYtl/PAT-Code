#include<iostream>
using namespace std;
int main()
{
	int g1, s1, k1;
	int g2, s2, k2;
	int g, s, k;
	int o1=0, o2=0, o3=0;
	scanf("%d.%d.%d", &g1, &s1, &k1);
	scanf("%d.%d.%d", &g2, &s2, &k2);
	g = g1 + g2;
	s = s1 + s2;
	k = k1 + k2;
	if(k >= 29)
	{
		o1++;
		k -= 29;
	}
	s = o1 + s;
	if(s >= 17)
	{
		o2++;
		s -= 17;
	}
	g = g + o2;
	printf("%d.%d.%d\n", g, s, k);
	return 0;
}