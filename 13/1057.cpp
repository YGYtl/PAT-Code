#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
stack<int> st;
vector<int> v;
int peekMedian(int m)
{
	stack<int> s;
	v.clear();
	while(!st.empty())
	{
		s.push(st.top());
		v.push_back(st.top());
		st.pop();
	}
	while(!s.empty())
	{
		st.push(s.top());
		s.pop();
	}
	sort(v.begin(),v.end());
	return v[m];
}
int main()
{
	int n, k, m;
	scanf("%d", &n);
	string s;
	while(n--)
	{
		cin >> s;
		if(s == "Pop")
		{
			if(st.empty()) printf("Invalid\n");
			else
			{
				printf("%d\n", st.top());
				st.pop();
			}
		}
		else if(s == "PeekMedian")
		{
			if(st.empty()) printf("Invalid\n");
			else
			{
				if(st.size()%2==0)
				{
					m = st.size()/2;
					m = peekMedian(m-1);
					printf("%d\n", m);
				}
				else{
					m = (st.size()+1)/2;
					m = peekMedian(m-1);
					printf("%d\n", m);
				}
			}
		}
		else if(s == "Push")
		{
			scanf("%d", &k);
			st.push(k);
		}
	}
	return 0;
}
