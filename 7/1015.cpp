#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct data{
	char num[10];
	int total;
	int d;
	int c;
};
bool cmp(data a, data b)
{
	if(a.total!=b.total)
	{
		return a.total > b.total;
	}
	else{
		if(a.d !=b.d) return a.d > b.d;
		else{
			return strcmp(a.num,b.num) < 0;
		}
	}
}

int main()
{	
	int n, d, g;
	data m;
	vector<data> v1, v2, v3, v4;
	cin >> n >> d >> g;
	int c=0;
	for(int i=0; i<n; i++)
	{
		cin >> m.num>> m.d >> m.c;
		m.total = m.d + m.c;
		if(m.d>=d&&m.c>=d)
		{
			c++;
			if(m.d>=g&&m.c>=g) v1.push_back(m);
			else if(m.d>=g&&m.c<g) v2.push_back(m);
			else if(m.d<g&&m.c<g&&m.d>=m.c) v3.push_back(m);
			else v4.push_back(m);
		}
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	printf("%d\n", c);
	vector<data> :: iterator mn;
	for(mn=v1.begin(); mn!=v1.end(); mn++)
	{
		printf("%s %d %d\n", mn->num, mn->d, mn->c);
	}
	for(mn=v2.begin(); mn!=v2.end(); mn++)
	{
		printf("%s %d %d\n", mn->num, mn->d, mn->c);
	}
	for(mn=v3.begin(); mn!=v3.end(); mn++)
	{
		printf("%s %d %d\n", mn->num, mn->d, mn->c);
	}
	for(mn=v4.begin(); mn!=v4.end(); mn++)
	{
		printf("%s %d %d\n", mn->num, mn->d, mn->c);
	}
	return 0;
}