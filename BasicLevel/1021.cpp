#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
int main()
{
	string str;
	cin >> str;
	set<int> s;
	for(int i=0; i<str.size(); i++) s.insert(str[i]-'0');
	set<int>::iterator v;
	for(v=s.begin(); v!=s.end(); v++)
	{
		int c = 0;
		for(int i=0; i<str.size(); i++)
		{
			if((*v)==str[i]-'0') c++;
		}
		printf("%d:%d\n", (*v), c);
	}
	return 0;
}
