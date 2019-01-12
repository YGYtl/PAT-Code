#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	vector<char> v;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]>='a'&&s1[i]<='z') s1[i] -= 32;
	}
	for(int i=0; i<s2.size(); i++)
	{
		if(s2[i]>='a'&&s2[i]<='z') s2[i] -= 32;
	}
	for(int i=0; i<s1.size(); i++)
	{
		int o1 = 1, o2 = 1;
		for(int j=0; j<s2.size(); j++)
		{
			if(s1[i]==s2[j])
			{
				o1 = 0;
				break;
			}
		}
		for(int j=0; j<v.size(); j++)
		{
			if(v[j]==s1[i])
			{
				o2 = 0;
				break;
			}
		}
		if(o1==1&&o2==1) v.push_back(s1[i]);
	}
	for(int i=0; i<v.size(); i++)
	{
		printf("%c", v[i]);
	}
	return 0;
}
