#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b, c;
	cin>>a>>b>>c;
	int l1 = a.length();
	int l2 = b.length();
	int l3 = c.length();
	int aa[22]={0};
	int bb[22]={0};
	int cc[22]={0};
	int d[22]={0};
	int i, l, k, m, sum;
	for(i=0; i<l1; i++)
	{
		aa[i] = a[l1-i-1]-'0';
	}
	for(i=0; i<l2; i++)
	{
		bb[i] = b[l2-i-1]-'0';
	}
	for(i=0; i<l3; i++)
	{
		cc[i] = c[l3-i-1]-'0';
	}
	if(l1>=l2) l = l1;
	if(l2>l1) l = l2;
	k = 0;
	for(i=0; i<=l; i++)
	{
		m = 0;
		m += k;
		sum = 0;
		if(aa[i]==0) aa[i] = 10;
		sum = bb[i]+cc[i]+m;
		d[i] += sum%aa[i];
		k = sum/aa[i];
	}
	int o = -1;
	for(i=l; i>=0; i--)
	{
		if(d[i]!=0)
		{
			o = i;
			break;
		}
	}
	if(o!=-1)
	{
		m = 0;
		for(i=l; i>=0; i--)
		{
			if(d[i]==0&&m==0)
			{
				continue;
			}
			m = 1;
			cout<<d[i];
		}
	}
	else{
		cout<<"0";
	}
	return 0;
}