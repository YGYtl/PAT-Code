#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n, m;
	int c_1=0, c_2=0, flag = 0;
	string k;
	map<string,int> v;
	string s;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++)
	{
		cin >> k;
		v[k] = 1;
	}
	for(int i=0; i<n; i++)
	{
		cin >> s >> m;
		flag = 0;
		for(int j=0; j<m; j++)
		{
			cin >> k;
			if(v[k]==1)
			{
				if(flag==0) cout << s << ":";
				cout << " " << k;
				c_2++;
				flag = 1;
			}
		}
		if(flag == 1)
		{
			cout << endl;
			c_1++;
		}
	}
	printf("%d %d", c_1, c_2);
	return 0;
}
