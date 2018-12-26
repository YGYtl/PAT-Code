#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int c = 0;
	for(int i=0; i<str.size(); i++)
	{
		if(str[i]=='P')
		{
			for(int j=i+1; j<str.size(); j++) 
			{
				if(str[j]=='A')
				{
					for(int k=j+1; k<str.size(); k++)
					{
						if(str[k]=='T') c++;
						c = c%1000000007;
					}
				}
			}
		}
	}
	printf("%d\n", c%1000000007);
	return 0;
}
