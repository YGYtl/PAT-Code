#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
struct data{
	char name[20];
	char dat[20];
}a;
int main()
{
	int i, n, l;
	queue<struct data> q;
	cin >> n;
	for(i=0; i<n; i++)
	{
		scanf("%s %s", a.name, a.dat);
		l = 0;
		for(int j=0; j<strlen(a.dat); j++)
		{
			if(a.dat[j]=='1')
			{
				a.dat[j] = '@';
				l = 1;
			}
			else if(a.dat[j]=='0')
			{
				a.dat[j] = '%';
				l = 1;
			}
			else if(a.dat[j]=='l')
			{
				a.dat[j] = 'L';
				l = 1;
			}
			else if(a.dat[j]=='O')
			{
				a.dat[j] = 'o';
				l = 1;
			}
		}
		if(l==1) q.push(a);
	}
	if(q.size()==0)
	{
		if(n==1) printf("There is %d account and no account is modified\n", n);
		else{
			printf("There are %d accounts and no account is modified\n", n);
		}
	}
	else{
		cout << q.size()<<endl;
		data p;
		for(; !q.empty(); q.pop())
		{
			p=q.front();
			cout << p.name <<' '<<p.dat<<endl;
		}
	}
	return 0;
}