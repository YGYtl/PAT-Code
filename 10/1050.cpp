#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;
set<char> s;
vector<char> v;
int main()
{
	char ch, i=0;
	scanf("%c", &ch);
	while(ch!='\n')
	{
		v.push_back(ch);
		scanf("%c", &ch);
	}
	scanf("%c", &ch);
	while(ch!='\n')
	{
		s.insert(ch);
		scanf("%c", &ch);
	}
	vector<char>::iterator c;
	for(c = v.begin(); c!=v.end(); c++)
	{
		if(s.count(*c)==0)
		{
			printf("%c", *c);
		}
	}
	printf("\n");
	return 0;
}