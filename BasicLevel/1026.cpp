#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int c1, c2, c;
	scanf("%d %d", &c1, &c2);
	int k = c2 - c1;
	c = (c2 - c1)/100;
	if(k>=50&&k<100) c++;
	else if(k>=100)
	{
		k /= 10;
		if(k%10>=5) c++;
	}
	int h, m, s;
	h = c/3600;
	c = c - h*3600;
	m = c/60;
	s = c - m*60;
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}
