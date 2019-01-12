#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main()
{
	int n, min = 0, i, c = 1;
	vector<int> v;
	scanf("%d", &n);
	v.resize(100005);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	sort(v.begin(),v.end(),cmp);
	for(i=0; i<n&&c<v[i]; i++,c++);
	printf("%d\n", i);
	return 0;
}
