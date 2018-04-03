#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
struct data{
	string num;
	int online;
	int z;
	int m;
	int final;
	data()
	{
		z = m = final = -1;
	}
}s[30001];

bool cmp(data a,data b)
{
	if(a.final == b.final) return a.num < b.num;
	return a.final > b.final;
}

int main()
{
	string c;
	map<string,int> v;
	int z, m, k, o;
	int count = 0;
	cin >> o >> z >> m;
	for(int i=0; i<o; i++)
	{
		cin >> c >> k;
		if(k >= 200 && k <= 900)
		{
			if(!v[c]) v[c] = ++count;
			s[v[c]].num = c;
			s[v[c]].online = k;
		}
	}
	for(int i=0; i<z; i++)
	{
		cin >> c >> k;
		if(v[c]&&k>=0&&k<=100)
		{
			s[v[c]].z = k;
		}
	}
	for(int i=0; i<m; i++)
	{
		cin >> c >> k;
		if(v[c]&&k>=0&&k<=100)
		{
			s[v[c]].m = k;
			if(s[v[c]].z<=s[v[c]].m)
			{
				s[v[c]].final = s[v[c]].m;
			}
			else{
				s[v[c]].final = (int)(s[v[c]].z*0.4+s[v[c]].m*0.6+0.5);
			}
		}
	}
	sort(s+1,s+count+1,cmp);
	for(int i=1; i<=count; i++)
	{
		if(s[i].final<60) break;
		cout <<s[i].num <<' '<<s[i].online<<' '<<s[i].z<<' '<<s[i].m<<' '<<
		s[i].final<<endl;
	}
	return 0;
}