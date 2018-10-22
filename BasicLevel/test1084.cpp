#include<iostream>
using namespace std;
int main()
{
	string s, s1;
	char ch;
	int n, c;
	cin >> s >> n;
	for(int i=0; i<n-1; i++)
	{
		c = 1;
		for(int j=0; j<s.size(); j++)
		{
			if(j==0)
			{
				ch = s[j];
				continue;
			}
			if(s[j]==ch) c++;
			else
			{
				s1 += ch;
				s1 += char(c + '0');
				ch = s[j];
				c = 1;
			}
		}
		s1 += ch;
		s1 += char(c+'0');
		s.clear();
		for(int j=0; j<s1.size(); j++) s += s1[j];
		s1.clear();
	}
	cout << s << endl;
	return 0;
}
