#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int c1=0, f = 0;
	set<char> s1, s2;
	map<char,int> m1, m2;
	for(int i=0; i<str1.size(); i++) s1.insert(str1[i]);
	for(int i=0; i<str2.size(); i++) s2.insert(str2[i]);
	set<char>::iterator s;
	for(s=s1.begin(); s!=s1.end(); s++)
	{
		int c = 0;
		for(int i=0; i<str1.size(); i++)
		{
			if(str1[i]==*s) c++;
		}
		m1[*s] = c;
	}
	for(s=s2.begin(); s!=s2.end(); s++)
	{
		int c = 0;
		for(int i=0; i<str2.size(); i++)
		{
			if(str2[i]==*s) c++;
		}
		m2[*s] = c;
	}
	map<char,int>::iterator m;
	for(m=m2.begin(); m!=m2.end(); m++)
	{
		if(m2[m->first]>m1[m->first])//ÉÙÁË 
		{
			f = 1;
			c1 += m2[m->first]-m1[m->first];
		}
	}
	if(f==0)
	{
		printf("Yes %d\n", str1.size()-str2.size());
	}
	else
	{
		printf("No %d\n", c1);
	}
	return 0;
}
