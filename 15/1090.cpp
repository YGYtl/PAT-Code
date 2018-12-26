#include<iostream>
#include<stdio.h>
#include<queue>
#include<map>
#include<math.h>
#include<vector>
using namespace std;
queue<int> q;
map<int, vector<int> > v;
double r, p;
int n, k;
void dfs(int s){
	int c, c1=1, l=0;
	q.push(s);
	while(!q.empty()){
		c = c1;
		c1 = 0;
		for(int i=0; i<c; i++){
			int t = q.front();
			q.pop();
			for(int j=0; j<v[t].size(); j++){
				q.push(v[t][j]);
				c1++;
			}
		}
		l++;
	}
	p = p*pow(1+r/100,l-2);
	printf("%.2f %d\n", p, c);
}
int main()
{
	scanf("%d %lf %lf", &n, &p, &r);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		if(k==-1){
			k = n;
		}
		v[k].push_back(i);
	}
	dfs(n);
	return 0;
}
