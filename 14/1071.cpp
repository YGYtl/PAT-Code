#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	string s, s1, s2;
	int g = 1, max = 0;
	getline(cin,s);
	map<string, int> m;
	for(int i=0; i<s.size(); i++) if(s[i]>='A'&&s[i]<='Z') s[i] = s[i]+32;
	for(int i=0; i<s.size(); i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
		{
			s1 += s[i];
		}
		else if(s1.size()>0)
		{
			m[s1]++;
			s1.clear();
		}
	}
	if(s1.size()>0) m[s1]++;
	map<string,int>::iterator mp;
	g = 0;
	for(mp=m.begin(); mp!=m.end(); mp++)
	{
		if(g == 0)
		{
			s2 = mp->first;
			max = mp->second;
			g = 1;
			continue;
		}
		if(mp->second > max)
		{
			s2 = mp->first;
			max = mp->second;	
		}
	}
	cout << s2 << " " << max << endl;
	return 0;
}
