#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int weight[20] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char ZM[20] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int n, sum;
	string s;
	vector<string> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> s;
		sum = 0;
		int o = 0;
		char k = s[17];
		for(int j=0; j<17; j++)
		{
			if(s[j]<'0'||s[j]>'9')
			{
				o = 1;
				break;
			}
			sum += weight[j]*(s[j]-'0');
		}
		if(o||ZM[sum%11]!=k) v.push_back(s);
	}
	if(v.size()==0) printf("All passed\n");
	else
	{
		for(int i=0; i<v.size(); i++) cout << v[i]<< endl;
	}
	return 0;
}
