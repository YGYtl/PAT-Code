#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int g1, s1, k1;//~, 17, 29
	int g2, s2, k2;
	int g, s, k;
	scanf("%d.%d.%d", &g1, &s1, &k1);
	scanf("%d.%d.%d", &g2, &s2, &k2);
	int sum1=0, sum2=0, sum;
	sum1 = g1*17*29+s1*29+k1;
	sum2 = g2*17*29+s2*29+k2;
	sum = sum1-sum2;
	if(sum > 0) printf("-");
	sum = abs(sum);
	g = sum/(17*29);
	sum = sum%(17*29);
	s = sum/29;
	sum = sum%29;
	k = sum;
	printf("%d.%d.%d", g, s, k);
	return 0;
}
