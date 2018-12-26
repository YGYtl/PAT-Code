#include<iostream>
#include<cstdio>
#include<map>
#include<set>
using namespace std;
map<int, set<string> > mp;
int main()
{
	int n, m, c, k;
	string s;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		cin >> s >> c;
		for(int j=0; j<c; j++){
			scanf("%d", &k);
			mp[k].insert(s);
		}
	}
	set<string>::iterator v;
	for(int i=1; i<=m; i++){
		printf("%d %d\n", i, mp[i].size());
		for(v=mp[i].begin(); v!=mp[i].end(); v++){
			cout << *v << endl;
		}
	}
	return 0;
}
