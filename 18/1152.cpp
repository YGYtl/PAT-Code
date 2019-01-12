#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
bool f(int n){
	if(n<=1) return false;
	if(n%2==0) return false;
	for(int i=3; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int l, k;
	scanf("%d %d", &l, &k);
	string s;
	cin >> s;
	bool flag = false;
	if(l>=k){
		for(int i=0; i<l; i++){
			int sum = 0, c = k-1;
			string str="";
			for(int j=i; j<i+k&&j<l; j++){
				str += s[j];
				sum += (s[j]-'0')*pow(10,c--);
			}
			if(f(sum)){
				flag = true;
				cout << str << endl;
				break;
			}
		}
	}
	if(flag==false) cout << "404" << endl;
	return 0;
}
