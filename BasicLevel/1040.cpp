#include<iostream>
using namespace std;
int main()
{
	string s;
	int n, p=0, t=0, c=0;
	cin >> s;
	n = s.length();
	for(int i=0; i<n; i++)
	{
		if(s[i]=='T') t++;
	}
	for(int i=0; i<n; i++)
	{
		if(s[i]=='P') p++;
		if(s[i]=='T') t--;
		if(s[i]=='A')
		{
			c = (c + (p*t) % 1000000007) % 1000000007;
		}
	}
	printf("%d\n", c);
	return 0;
}
