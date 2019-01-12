#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
	string s1, s2;
	int k = 0, a, b;
	stack<char> sk;
	cin >> s1 >> s2;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	char s[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'J', 'Q', 'K'};
	for(int i=0; i<s1.size()||i<s2.size(); i++)
	{
		a = 0; b = 0;
		if(i<s1.size()) a = s1[i]-'0';
		if(i<s2.size()) b = s2[i]-'0';
		if((i+1)%2==0)//Å¼Êı 
		{
			k = b - a;
			if(k<0) k += 10;
			sk.push(s[k]);
		}
		else//ÆæÊı 
		{
			k = (a+b)%13;
			sk.push(s[k]);
		}
	}
	while(sk.size()!=0)
	{
		printf("%c", sk.top());
		sk.pop();
	}
	return 0;
}
