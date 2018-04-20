#include<iostream>
using namespace std;
int a[1001]={'\0'};
int jn(int n, int b);
bool hw(int *a, int l);
int main()
{
	int n, b, l;
	cin >> n >> b;
	l = jn(n,b);
	if(hw(a,l))
	{
		cout << "Yes"<<endl;
	}
	else{
		cout << "No"<<endl;
	}
	for(int i=l-1; i>=0; i--)
	{
		if(i!=l-1) cout<<' ';
		cout << a[i];
	}
	return 0;
}
int jn(int n, int b)
{
	int i = 0;
	if(n==0)
	{
		a[i] = 0;
		i = 1;
	}
	else{
		for(i=0; n; i++)
		{
			a[i] = n%b;
			n = n/b;
		}
	}
	return i;
}
bool hw(int *a, int l)
{
	int l1 = l-1;
	for(int i=0; i<l/2; i++)
	{
		if(a[i]!=a[l1--]) return false;
	}
	return true;
}