#include<iostream>
#include<cstdio>
using namespace std;
int a[100005], b[100005], c[100005];
int main()
{
	int n, min, max, count = 0;
	bool flag = false;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	min = a[n-1]; max = a[0];
	for(int i=0; i<n; i++){
		if(a[i]>max) max = a[i];
		b[i] = max;
	}
	for(int i=n-1; i>=0; i--){
		if(a[i]<min) min = a[i];
		c[i] = min;
	}
	for(int i=0; i<n; i++){
		if(b[i]==c[i]) count++;
	}
	printf("%d\n", count);
	if(count){
		for(int i=0; i<n; i++){
			if(b[i]==c[i]){
				if(flag) printf(" ");
				printf("%d", b[i]);
				flag = true;
			}
		}
	}
	else printf("\n");
	return 0;
}
