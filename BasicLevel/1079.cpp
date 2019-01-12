#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool hw(string s)
{
	string str;
	for(int i=0; i<s.size(); i++) str += s[i];
	reverse(str.begin(),str.end());
	if(str==s) return true;
	else return false;
}
string f(string s1, string s2)
{
	string s;
	int k1=0, k2=0;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i=0; i<s1.size(); i++)
	{
		k1 = (s1[i]-'0'+s2[i]-'0'+k2)%10;
		k2 = (s1[i]-'0'+s2[i]-'0'+k2)/10;
		s += k1+'0'; 
	}
	if(k2>0) s+=k2+'0';
	reverse(s.begin(),s.end());
	return s;
}
int main()
{
	string s1, s2, s;
	int c = 0;
	cin >> s;
	for(int i=0; i<s.size(); i++)
	{
		s1 += s[i];
		s2 += s[i];
	}
	reverse(s1.begin(),s1.end());
	while(hw(s2)==false&&c<10)
	{
		cout << s << " + " << s1 << " = ";
		s2 = f(s,s1);
		cout << s2 << endl;
		s.clear();
		s1.clear();
		for(int i=0; i<s2.size(); i++)
		{
			s += s2[i];
			s1 += s2[i];
		}
		reverse(s1.begin(),s1.end());
		c++;
	}
	if(c<10) cout << s2 << " is a palindromic number." << endl;
	else cout << "Not found in 10 iterations." << endl;
	return 0;
}
