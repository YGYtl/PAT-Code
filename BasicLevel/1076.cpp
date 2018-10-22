#include<iostream>
using namespace std;
int main()
{
	int n;
	char a, b, c, d, e, f, g, h;
	int str[5] = {1, 2, 3, 4};
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		getchar();
		scanf("%c-%c %c-%c %c-%c %c-%c", &a, &b, &c, &d, &e, &f, &g, &h);
		if(b=='T') printf("%d", str[a-'A']);
		else if(d=='T') printf("%d", str[c-'A']);
		else if(f=='T') printf("%d", str[e-'A']);
		else if(h=='T') printf("%d", str[g-'A']);
	}
	return 0;
}
