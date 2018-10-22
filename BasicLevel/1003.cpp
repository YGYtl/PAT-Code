#include<iostream>
using namespace std;
bool zf(string s)
{
	int p=0, t=0, a=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]!='P'&&s[i]!='T'&&s[i]!='A') return false;
		if(s[i]=='P') p++;
		if(s[i]=='A') a++;
		if(s[i]=='T') t++;
	}
	if(p==0||a==0||t==0) return false;
	else if(p>1||t>1) return false;
	else return true;
	return true;
}

bool f(string s)
{
	int ap=0, pt=0, ta=0;
	int i, j, k;
	for(i=0; s[i]!='P'; i++) ap++;
	for(j=i+1; s[j]!='T'; j++) pt++;
	for(k=j+1; s[k]!='\0'; k++) ta++;
	if(pt==1&&ap==ta) return true;
	else if(ap*pt==ta) return true;
	return false;
}

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	while(n--)
	{
		cin >> s;
		if(zf(s)==false) printf("NO\n");
		else
		{
			if(f(s)==false) printf("NO\n");
			else printf("YES\n");
		}
	}
	return 0;
}
