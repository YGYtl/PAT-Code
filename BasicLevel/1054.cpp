#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double ff(string s)
{
	double sum = 0;
	int c = 0, f = 0, i=0, k = 1;
	if(s[0]=='-')
	{
		k = -1;
		i++;
	}
	for(; i<s.length(); i++)
	{
		if(s[i]=='.')
		{
			f = 1;
			continue;
		}
		if(f)
		{
			c++;
			sum += (s[i]-'0')*pow(0.1,c);
		}
		else sum = sum*10 + s[i]-'0';
	}
	return sum*k;
}
int main()
{
	int n, g = 0;
	double sum = 0;
	string s;
	vector<string> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> s;
		int f = 1, c = 0, h = 0, sz=0, c_=0;
		for(int i=0; i<s.length(); i++)
		{
			if(i==0&&s[i]=='-') c_++;
			if(s[i]=='.') { c++; continue; }
			if(c==1) h++;
			if(s[i]>='0'&&s[i]<='9') sz++;
		}
		if(c>1||h>2||sz+c+c_!=s.length()||ff(s)>1000||ff(s)<-1000) f = 0;
		if(f==0)
		{
			printf("ERROR: ");
			cout << s << " is not a legal number" << endl;
		}
		else
		{
			sum += ff(s);
			g++;
		}
	}
	if(g>1)
	{
		printf("The average of %d numbers is %.2f\n", g, sum*1.0/g);
	}
	else if(g==1) printf("The average of 1 number is %.2f\n", sum);
	else printf("The average of 0 numbers is Undefined\n");
	return 0;
}
