#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, u, c, s;
int a[10004];
void init(){
	for(int i=1; i<10004; i++){
		a[i] = i;
	}
}
int main()
{
	init();
	c = 0; s = -1;
	vector<int> v;
	scanf("%d", &n);
	for(int k=0; k<n; k++){
		scanf("%d", &m);
		v.clear();
		for(int i=0; i<m; i++){
			scanf("%d", &u);
			if(s == -1 || u > s) s = u;
			v.push_back(a[u]);
		}
		sort(v.begin(),v.end());
		int min = v[0];
		for(int i=1; i<m; i++){
			for(int j=0; j<10004; j++){
				if(a[j]==v[i]){
					a[j] = min;
				}
			}
		}
	}
	for(int i=1; i<=n; i++){
		if(i==a[i]) c++;
	}
	int m2, p, q;
	scanf("%d", &m2);
	printf("%d %d\n", c, s);
	for(int i=0; i<m2; i++){
		scanf("%d %d", &p, &q);
		if(a[p]==a[q]){
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}
