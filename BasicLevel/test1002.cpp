#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char ch[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	string s;
	cin >> s;
	int sum = 0;
	vector<int> v;
	for(int i=0; i<s.length(); i++) sum += (s[i]-'0');
	for(int i=0; sum>0; i++)
	{
		int k = sum%10;
		sum/=10;
		v.push_back(k);
	}
	for(int i=v.size()-1; i>=0; i--)
	{
		if(i!=v.size()-1) printf(" ");
		printf("%s", ch[v[i]]);
	}
	return 0;
}
