#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r1, p1, r2, p2;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
	double r = r1*r2;
	double c = cos(p1)*cos(p2)-sin(p1)*sin(p2);
	double ci = cos(p1)*sin(p2)+sin(p1)*cos(p2);
	if(abs(c*r)>1e-6) printf("%.2f", c*r);
	else if(c*r+0.05>=0&&c<0) printf("0.00");
	if(abs(ci*r)>1e-6)
	{
		if(ci*r>1e-6) printf("+%.2fi", ci*r);
		else printf("-%.2fi", abs(ci*r));
	}
	else if(ci*r+0.01>=0&&ci<0) printf("+0.00i");
	return 0;
}
