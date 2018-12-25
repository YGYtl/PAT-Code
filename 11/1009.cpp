#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	double a[2001]={0.0}, b[2001]={0.0}, g;
	int n, m, k, c = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %lf", &k, &g);
		a[k] = g;
	}
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %lf", &k, &g);
		for(int j=0; j<1001; j++){
			b[j+k] += a[j]*g;
		}
	}
	for(int i=2000; i>=0; i--){
		if(b[i]!=0.0) c++;
	}
	printf("%d", c);
	for(int i=2000; i>=0; i--){
		if(b[i]!=0.0){
			printf("%d %.1f", i, b[i]);
		}
	}
	return 0;
}
