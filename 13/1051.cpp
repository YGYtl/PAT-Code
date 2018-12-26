#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
stack<int> s;
int main()
{
	int m, l, n;
	int k, o, c;
	scanf("%d %d %d", &m, &l, &n);
	for(int i=0; i<n; i++)
	{
		o = 0;
		c = 1;
		for(int j=0; j<l; j++)
		{
			scanf("%d", &k);
			while(s.top()!=k)
			{
				s.push(c);
				c++;
			}
			if(s.size() > l) o = 1;
			s.pop();
		}
		if(o == 1 || s.size()!=0) printf("No\n");
		else printf("YES\n");
		while(!s.empty()) s.pop();
	}
	return 0;
}
