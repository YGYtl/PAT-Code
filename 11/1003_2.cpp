#include<iostream>
#include<stdio.h>
#include<string.h>
#define max 501 
using namespace std;
int n, m, c1, c2, mdist, c, mweit;
int wei[max], map[max][max];
bool vis[max];
void init(){
	for(int i=0; i<n; i++){
		vis[i] = false;
		for(int j=0; j<n; j++){
			map[i][j] = 32767;
		}
	}
}
void dfs(int p, int end, int dist, int weit){
	if(p==end){
		if(dist < mdist){
			mdist = dist;
			mweit = weit;
			c = 1;
		}
		else if(dist == mdist){
			c++;
			if(mweit < weit){
				mweit = weit;
			}
		}
		return;
	}
	for(int i=0; i<n; i++){
		if(vis[i]==false&&map[p][i]!=32767){
			vis[i] = true;
			dfs(i,end,dist+map[p][i],weit+wei[i]);
			vis[i] = false;
		}
	}
}
int main()
{
	int a, b, d;
	mdist = 32767;
	c = 0;
	scanf("%d %d %d %d", &n, &m, &c1, &c2);
	init();
	for(int i=0; i<n; i++) scanf("%d", &wei[i]);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &d);
		if(map[a][b]>d){
			map[a][b] = map[b][a] = d;
		}
	}
	dfs(c1,c2,0,wei[c1]);
	printf("%d %d\n", c, mweit);
	return 0;
}
