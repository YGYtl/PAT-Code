#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l=s.length(), i=0;
	for(i=0; i<s.length(); i++)
	{
		int k = s[i]-'0';
		if(l==3){
			while(k--) printf("B");
		}
		else if(l==2){
			while(k--) printf("S");
		}
		else{
			for(int j=1; j<=k; j++) printf("%d", j);
		}
		l--;
	}
	return 0;
}
