#include<iostream>
using namespace std;
int main()
{
	string str;
	int a, am=-1, l, b, i;
	cin >> str;
	l = str.length();
	for(b=3; b<=l; b++)
	{
		for(a=1; a<=b; a++)
		{
			if(2*a + b - 2 == l){
				if(a>am) am = a;
				continue;
			}
		}
	}
	a = am;
	b = l - 2*a;
	for(i=0; i<a-1; i++)
	{
		cout << str[i];
		for(int j=0; j<b; ++j) cout <<' ';
		cout << str[l-i-1]<<endl;
	}
	for(i=i; i<=l-a; i++) cout << str[i];
	return 0;
}