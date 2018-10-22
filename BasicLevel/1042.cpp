#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='A'&&a[i]<='Z') a[i] += 32;
	}
	set<char> s;
	vector<char> v;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			v.push_back(a[i]);
			s.insert(a[i]);
		}
	}
	map<char,int> m;
	set<char>::iterator ss;
	for(ss=s.begin(); ss!=s.end(); ss++)
	{
		int c = 0;
		for(int i=0; i<v.size(); i++)
		{
			if(*ss==v[i]) c++;
		}
		m[*ss] = c;
	}
	map<char,int>::iterator p;
	char target;
	int c = 0;
	for(p=m.begin(); p!=m.end(); p++)
	{
		if(p->second>c)
		{
			c = p->second;
			target = p->first;
		}
	}
	printf("%c %d\n", target, c);
	return 0;
}
