#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
struct data{
	int w;
	int t;
}a[1001];
int main()
{
	int n, t, g, group, np;
	queue<int> q;
	scanf("%d %d", &n, &np);
	for(int i=0; i<n; i++) scanf("%d", &a[i].w);
	for(int i=0; i<n; i++){
		scanf("%d", &g);
		q.push(g);
	}
	t = n;
	while(q.size()!=1){
		if(t%np!=0) group = t/np+1;
		else group = t/np;
		for(int i=0; i<group; i++){
			int k = q.front();
			for(int j=0; j<np; j++){
				if(i*np+j>=t) break;
				int f = q.front();
				if(a[k].w < a[f].w){
					k = f;
				}
				a[f].t = group+1;
				q.pop();
			}
			q.push(k);
		}
		t = group;
	}
	a[q.front()].t = 1;
	for(int i=0; i<n; i++){
		if(i) printf(" ");
		printf("%d", a[i].t);
	}
	return 0;
}
