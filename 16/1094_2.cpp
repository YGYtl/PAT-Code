#include<iostream>
#include<cstdio>
#include<map>
#include<string.h>
using namespace std;
map<int,int> mp;
int f(int b){
	int g = 1;
	while(mp[b]!=b){
		b = mp[b];
		g++;
	}
	return g;
}
int main()
{
	int n, m, a, b, k;
	int count=0, mx;
	int c[104];
	memset(c,0,sizeof(c));
	scanf("%d %d", &n, &m);
	for(int i=0; i<=100; i++) mp[i] = i;
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		for(int j=0; j<b; j++){
			scanf("%d", &k);
			mp[k] = a;
		}
	}
	for(int i=1; i<=n; i++){//ÀÛ¼ÓÈËÊý 
		c[f(i)]++;
	}
	for(int i=1; i<=n; i++){
		if(c[i]>count){
			count = c[i];
			mx = i;
		}
	}
	printf("%d %d\n", count, mx);
	return 0;
}
