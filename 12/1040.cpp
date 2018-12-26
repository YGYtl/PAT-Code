#include<iostream>
#include<vector>
using namespace std;
vector<char> v;
bool f()
{
	int l = v.size()-1;
	for(int i=0; i<v.size()/2; i++)
	{
		if(v[i]!=v[l--]) return false;
	}
	return true;
}
int main()
{
	string str;
	while(getline(cin,str))
	{
		int l = str.size();
		int c = 0;
		for(int i=0; i<l; i++)
		{
			for(int j=i; j<l; j++)
			{
				v.push_back(str[j]);
				if(f()==true&&v.size() > c) c = v.size();
			}
			v.clear();
		}
		cout << c << endl;
	}
	return 0;
}
