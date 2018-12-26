#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n, a[101], b[101], k=0, g;
	bool flag = true;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	for(int i=0; i<n&&flag; i++){
		if(a[i]!=b[i]&&k==0){
			if(i==0) continue;
			if(b[i-1]>b[i]){
				flag = false;
			}
			g = i;
		}
		else{
			if(a[i]!=b[i]) flag = false;
			k = 1;
		}
	}
	if(flag) printf("Insertion Sort\n");
	else printf("Heap Sort\n");
	
	if(flag){
		g+=2;
		sort(b,b+g);
		for(int i=0; i<n; i++){
			if(i) printf(" ");
			printf("%d", b[i]);
		}
	}
	else{
		g = -1;
		for(int i=1; i<n-1; i++){
			if(b[i]<b[i+1]){
				if(g==-1) g = i;
			}
			else{
				g = -1;
			}
		}
		
	}
	return 0;
}
