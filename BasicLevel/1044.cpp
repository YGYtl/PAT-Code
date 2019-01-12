#include<iostream>
using namespace std;
int f(string s)
{
	int c = 0;
	for(int i=0; i<s.length(); i++)
	{
		c = c*10 + s[i]-'0';
	}
	return c;
}
int main()
{
	int n;
	string s;
	char gw[20][5] = {"tret", "jan", "feb", "mar", "apr", "may",
	"jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	char shi[14][5] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes",
	"hei", "elo", "syy", "lok", "mer", "jou"};
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++)
	{
		getline(cin,s);
		if(s[0]>='0'&&s[0]<='9')
		{
			int k = f(s);
			if(k>=13)
			{
				printf("%s", shi[k/13]);
				k = k%13;
				if(k==0)
				{
					printf("\n");
					continue;
				}
				else printf(" ");
			}
			printf("%s\n", gw[k]);
		}
		else
		{
			string s1;
			int c = 0;
			for(int i=0; i<s.length(); i++)
			{
				if(s[i]!=' ') s1 += s[i];
				else
				{
					for(int j=0; j<13; j++)
					{
						if(s1==shi[j])
						{
							c += j*13; break;
						}
					}
					s1.clear();
				}
			}
			if(s1.length()!=0)
			{
				for(int j=0; j<13; j++)
					{
						if(s1==shi[j])
						{
							c += j*13; break;
						}
						if(s1==gw[j])
						{
							c += j; break;
						}
					}
			}
			printf("%d\n", c);
		}
	}
	return 0;
}
