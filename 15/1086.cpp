#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
using namespace std;
vector<int> pre, in, post;
void p(int root, int s, int e){
	if(s>e) return;
	int i = s;
	while(i<e&&pre[root]!=in[i]) i++;
	p(root+1,s,i-1);
	p(root+i-s+1,i+1,e);
	post.push_back(pre[root]);
}
int main()
{
	int n, k;
	string s;
	stack<int> g;
	scanf("%d", &n);
	for(int i=0; i<n; ){
		cin >> s;
		if(s=="Push"){
			i++;
			scanf("%d", &k);
			g.push(k);
			pre.push_back(k);
		}
		else{
			in.push_back(g.top());
			g.pop();
		}
	}
	p(0,0,n-1);
	for(int i=0; i<n; i++){
		if(i) printf(" ");
		printf("%d", post[i]);
	}
	
	return 0;
}
