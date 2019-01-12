#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s1, s2, s3, s;
	int g = 0, a, b, c, d, e;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	vector<string> v1, v2, v3;
	for(int i=0; i<s1.length(); i++)
	{
		if(s1[i]=='[')
		{
			g = 1;
			continue;
		}
		if(s1[i]==']')
		{
			g = 0;
			v1.push_back(s);
			s.clear();
		}
		if(g==1)
		{
			s += s1[i];
		}
	}
	for(int i=0; i<s2.length(); i++)
	{
		if(s2[i]=='[')
		{
			g = 1;
			continue;
		}
		if(s2[i]==']')
		{
			g = 0;
			v2.push_back(s);
			s.clear();
		}
		if(g==1)
		{
			s += s2[i];
		}
	}
	for(int i=0; i<s3.length(); i++)
	{
		if(s3[i]=='[')
		{
			g = 1;
			continue;
		}
		if(s3[i]==']')
		{
			g = 0;
			v3.push_back(s);
			s.clear();
		}
		if(g==1)
		{
			s += s3[i];
		}
	}
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		a--; b--; c--; d--; e--;
		if(a<0||b<0||c<0||d<0||e<0||a>=v1.size()||b>=v2.size()||c>=v3.size()
		||d>=v2.size()||e>=v1.size())
		{
			cout << "Are you kidding me? @\\/@\n" << endl;
		}
		else
		{
			cout << v1[a] << "(" << v2[b] << v3[c] << v2[d] << ")" << v1[e]<<endl;
		}
	}
	return 0;
}
