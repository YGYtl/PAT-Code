#include<cstdio>
#include<iostream>
#include<map>
#include<queue>
using namespace std;
map<int,int> m;
queue<int> q;
int main()
{
	int n, k, c = 0, l;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> k;
		l = 0;
		q.push(k);
		m[k]++;
	}
	l = 0;
	int qo;
	for(; !q.empty(); q.pop())
	{
		qo = q.front();
		if(m[qo]==1)
		{
			l = 1;
			cout << qo;
			break;
		}
	}
	if(l == 0) cout << "None";
	return 0;
}