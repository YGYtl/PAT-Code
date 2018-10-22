#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int sum = 0;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
		if(s[i]>='A'&&s[i]<='Z') sum += s[i]-'A'+1;
	}
	int c_0=0, c_1=0;
	while(sum)
	{
		int k = sum%2;
		sum /= 2;
		if(k==0) c_0++;
		else c_1++;
	}
	printf("%d %d\n", c_0, c_1);
	return 0;
}
