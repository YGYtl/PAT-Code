#include<iostream>
#include<stdio.h>
using namespace std;
int father[10004], root[10004];
int find(int x){
	int a = x;
	while(x!=father[x]) x = father[x];
	while(a!=father[a]){
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
void Union(int a, int b){
	int fa = find(a);
	int fb = find(b);
	if(fa != fb) father[fb] = fa;
}
int main()
{
	int n, m, g1, g2, mx=-1, c = 0, mm;
	int p, q;
	scanf("%d", &n);
	for(int i=1; i<10004; i++) father[i] = i;
	for(int i=0; i<n; i++){
		scanf("%d %d", &m, &g1);
		if(g1>mx) mx = g1;
		for(int j=0; j<m-1; j++){
			scanf("%d", &g2);
			if(g2>mx) mx = g2;
			Union(g1,g2);
		}
	}
	for(int i=1; i<=mx; i++){
		root[find(i)]++;
	}
	for(int i=1; i<=mx; i++){
		if(root[i]) c++;
	}
	printf("%d %d\n", c, mx);
	scanf("%d", &mm);
	for(int i=0; i<mm; i++){
		scanf("%d %d", &p, &q);
		if(find(p)==find(q)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
