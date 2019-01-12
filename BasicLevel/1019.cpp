#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main()
{
	int n, n1, n2; 
	vector<int> a;
	scanf("%d", &n);
	do{
		a.resize(4);
		for(int i=0; n>0; i++)
		{
			a[i] = n%10;
			n /= 10;
		}
		sort(a.begin(),a.end());
		n1=0, n2=0;
		for(int i=0; i<4; i++) n1 = n1*10 + a[i];//С 
		sort(a.begin(),a.end(),cmp);
		for(int i=0; i<4; i++) n2 = n2*10 + a[i];//С 
		n = n2 - n1;
		printf("%04d - %04d = %04d\n", n2, n1, n);
	}while(n!=0&&n!=6174);
	return 0;
}
