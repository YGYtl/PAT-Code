#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int k, index;
	vector<int> v;
	for(int i=0; i<10; i++)
	{
		scanf("%d", &k);
		if(k!=0)
		{
			while(k--)
			{
				v.push_back(i);
			}
		}
	}
	for(int i=0; i<v.size(); i++)
	{
		if(v[i]!=0)
		{
			index = i;
			break;
		}
	}
	int g = v[0];
	v[0] = v[index];
	v[index] = g;
	for(int i=0; i<v.size(); i++)
	{
		printf("%d", v[i]);
	}
	return 0;
}
