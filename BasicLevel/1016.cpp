#include<iostream>
using namespace std;
int main()
{
	int a, da, b, db;
	int ca=0, cb=0;
	scanf("%d %d %d %d", &a, &da, &b, &db);
	while(a)
	{
		int k = a%10;
		if(k==da) ca = ca*10 + da;
		a /= 10;
	}
	while(b)
	{
		int k = b%10;
		if(k==db) cb = cb*10 + db;
		b /= 10;
	}
	printf("%d\n", ca+cb);
	return 0;
}
