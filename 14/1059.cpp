#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
bool su(long int j)
{
	for(long int i=2; i*i<=j; i++)
	{
		if(j%i==0) return false;
	}
	return true;
}
int main()
{
	long int l, ll, c=0;
	map<long int, int> m;
	cin >> l;
	ll = l;
	if(l==1) m[1] = 1;
	while(ll!=1)
	{
		for(long int i=2; i<=ll; i++)
		{
			if(ll%i==0&&su(i))
			{
				m[i]++;
				ll /= i;
				break;
			}
		}
	}
	map<long int, int>::iterator v;
	cout << l << "=";
	for(v = m.begin(); v!=m.end(); v++)
	{
		if(c!=0) cout << "*";
		cout << v->first;
		if(v->second>1)cout << "^" << v->second;
		c++;
	}
	cout << endl;
	return 0;
}
