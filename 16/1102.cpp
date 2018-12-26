#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
struct node{
	int l, r;
	node(){ l = -1; r = -1; }
}a[20];
int g = 0;
void p(int root){
	if(root==-1) return;
	p(a[root].l);
	p(a[root].r);
	swap(a[root].l,a[root].r);
}
void bfs(int r){
	queue<int> q;
	q.push(r);
	int i = 0;
	while(!q.empty()){//œ»–Ú±È¿˙ 
		int g = q.front();
		q.pop();
		if(i) printf(" ");
		printf("%d", g);
		i++;
		if(a[g].l!=-1) q.push(a[g].l);
		if(a[g].r!=-1) q.push(a[g].r);
	}
}
void in(int root){
	if(root==-1) return;
	if(a[root].l!=-1) in(a[root].l);
	if(g) printf(" ");
	g++;
	printf("%d", root);
	if(a[root].r!=-1) in(a[root].r);
}
int main()
{
	int n, root;
	char l, r;
	scanf("%d", &n);
	int b[n];
	for(int i=0; i<n; i++){
		getchar();
		scanf("%c %c", &l, &r);
		if(l!='-'){
			a[i].l = l-'0';
			b[l-'0'] = l-'0';
		}
		if(r!='-'){
			a[i].r = r-'0';
			b[r-'0'] = r-'0';
		}
	}
	for(int i=0; i<n; i++){
		if(b[i]!=i){
			root = i;
			break;
		}
	}
	p(root);
	bfs(root);
	printf("\n");
	in(root);
	return 0;
}
