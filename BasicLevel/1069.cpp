#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m, n, s, c=0, k, flag=0;
	vector<string> v;
	string str;
	scanf("%d %d %d", &m, &n, &s);
	s--;
	for(int i=0; i<m; i++)
	{
		cin >> str;
		flag = 0;
		if(i < s) continue;
		if(i == s)
		{
			cout << str << endl;
			v.push_back(str);
			c++;
			k = n;
		}
		else
		{
			for(int j=0; j<v.size(); j++)
			{
				if(str==v[j])
				{
					flag = 1;
					break;
				}
			}
			if(k==1&&flag==0)
			{
				cout << str << endl;
				v.push_back(str);
				k = n;
				c++;
			}
			else if(k==1&&flag==1) k = 1;
			else k--;
		}
	}
	if(c==0) printf("Keep going...\n");
	return 0;
}
