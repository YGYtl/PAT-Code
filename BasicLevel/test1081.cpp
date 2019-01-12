#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	string s;
	int c_1=0, c_w=0, c__=0;
	for(int i=0; i<n; i++)
	{
		getline(cin,s);
		c_1=0, c_w=0, c__=0;
		for(int j=0; j<s.size(); j++)
		{
			if(s[j]>='0'&&s[j]<='9') c_1++;
			else if(s[j]>='a'&&s[j]<='z') c_w++;
			else if(s[j]>='A'&&s[j]<='Z') c_w++;
			else if(s[j]=='.') c__++;
		}
		if(s.size()<6) printf("Your password is tai duan le.\n");
		else if(c_1+c_w+c__!=s.size()) printf("Your password is tai luan le.\n");
		else if(c_w==0) printf("Your password needs zi mu.\n");
		else if(c_1==0) printf("Your password needs shu zi.\n");
		else printf("Your password is wan mei.\n");
		s.clear();
	}
	return 0;
}
