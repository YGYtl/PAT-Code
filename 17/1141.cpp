#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string school;//学校名 
	int sum;//总分 
	int num;//总人数 
};
bool cmp(data a, data b)
{
	if(a.sum!=b.sum) return a.sum > b.sum;
	else{
		if(a.num!=b.num) return a.num < b.num;
		else return a.school < b.school;
	}
}
int main()
{
	int n, flag = 1, g;
	double k;
	string id, school;
	scanf("%d", &n);
	map<string,> m;
	vector<data> vm;
	for(int i=0; i<n; i++)
	{
		cin >> id >> k >> school;
		for(int j=0; j<school.size(); j++)
		{
			if(school[j]>='A'&&school[j]<='Z')
			{
				school[j] = school[j]+32;
			}
		}
		
	}
	
	return 0;
}
