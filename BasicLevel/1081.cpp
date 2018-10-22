#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> s;
		int c_=0, c_a=0, c_0=0;
		if(s.size()<6) cout << "Your password is tai duan le." << endl;
		else
		{
			for(int j=0; j<s.size(); j++)
			{
				if(s[j]=='.') c_++;
				else if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')) c_a++;
				else if(s[j]>='0'&&s[j]<='9') c_0++;
			}
			if(c_+c_a+c_0!=s.size()) cout << "Your password is tai duan le." << endl;
			else if(c_a==0) cout << "Your password needs zi mu." << endl;
			else if(c_0==0) cout << "Your password needs shu zi." << endl;
			else cout << "Your password is wan mei." << endl;
		}
	}
	return 0;
}
