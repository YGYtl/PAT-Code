#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s1, s2;
	int dx = 1; 
	vector<char> v, s;
	cin >> s1 >> s2;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]=='+') dx = 0;
		if(s1[i]>='A'&&s1[i]<='Z') v.push_back(s1[i]+32);
		v.push_back(s1[i]);
	}
	for(int i=0; i<s2.size()&&i<100001; i++)
	{
		int o = 1;
		if(dx==0&&(s2[i]>='A'&&s2[i]<='Z')) continue;
		for(int j=0; j<v.size(); j++)
		{
			if(s2[i]==v[j]) o = 0;
		}
		if(o) s.push_back(s2[i]);
	}
	if(s.size()>0)
	{
		for(int j=0; j<s.size(); j++) printf("%c", s[j]);
	}
	else printf("\n");
	return 0;
}
