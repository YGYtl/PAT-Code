#include<iostream>
using namespace std;
int main()
{
	char f;
	scanf("%c", &f);
	string s;
	getchar();
	getline(cin,s);
	if(f=='C')
	{
		char front;
		int c = 0;
		for(int i=0; i<s.size(); i++)
		{
			if(i==0)
			{
				c++;
				front = s[i];
			}
			else
			{
				if(s[i]==front)
				{
					c++;
				}
				else
				{
					if(c==1) printf("%c", front);
					else printf("%d%c", c, front);
					c = 1;
					front = s[i];
				}
			}
		}
		if(c==1) printf("%c", front);
		else printf("%d%c", c, front);
	}
	else
	{
		int sum = 0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			{
				sum = sum*10 + s[i]-'0';
			}
			else
			{
				if(i==0||s[i-1]<'0'||s[i-1]>'9') printf("%c", s[i]);
				else for(int j=0; j<sum; j++) printf("%c", s[i]);
				sum = 0;
			}
		}
	}
	return 0;
}
