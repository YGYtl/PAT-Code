#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2, s;
	string str1, str2;
	cin >> s >> s1 >> s2;
	vector<int> v;
	reverse(s.begin(),s.end());
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int k1=0, k2=0;
	for(int i=0; i<21; i++)
	{
		if(i>=s.size()) s+='0';
		if(i>=s1.size()) s1+='0';
		if(i>=s2.size()) s2+='0';
	}
	for(int i=0; i<21; i++)
	{
		if(s[i]-'0'==0)
		{
			k1 = ((s1[i]-'0')+(s2[i]-'0')+k2)%10;
			k2 = ((s1[i]-'0')+(s2[i]-'0')+k2)/10;
		}
		else
		{
			k1 = ((s1[i]-'0')+(s2[i]-'0')+k2)%(s[i]-'0');
			k2 = ((s1[i]-'0')+(s2[i]-'0')+k2)/(s[i]-'0');
		}
		v.push_back(k1);
	}
	int flag = 0;
	reverse(v.begin(),v.end());
	for(int i=0; i<v.size()-1; i++)
	{
		if(v[i]==0&&flag==0) continue;
		printf("%d", v[i]);
		flag = 1;
	}
	if(v.size()>=1) printf("%d", v[v.size()-1]);
	else printf("0");
	return 0;
}
