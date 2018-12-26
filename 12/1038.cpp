#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct data{
	int min_num;
	int index;
	string num;
};
int indx;
int min_n(string s){
	int min = 10, n;
	for(int i=0; i<s.length(); i++){
		n = s[i]-'0';
		if(n<min){
			min = n;
			indx = i;
		}
	}
	return min;
}
bool cmp(data a, data b){
	if(a.min_num!=b.min_num) return a.min_num < b.min_num;
	else{
		if(a.index!=b.index) return a.index < b.index;
		else return a.num < b.num;
	}
}
int main(){
	int n; string s; bool flag = false;
	scanf("%d", &n);
	data a[10001];
	for(int i=0; i<n; i++){
		indx = -1;
		cin >> a[i].num;
		a[i].min_num = min_n(a[i].num);
		a[i].index = indx;
	}
	sort(a,a+n,cmp);
	for(int i=0; i<n; i++){
		if(a[i].num[0]=='0'){
			for(int j=0; j<a[i].num.length(); j++){
				if(flag==false&&a[i].num[j]!='0') flag = true;
				if(flag) printf("%c", a[i].num[j]);
			}
		}
		else cout << a[i].num;
	}
	return 0;
}
