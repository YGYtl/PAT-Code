#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string name;
	int gp;
	int g_mid;
	int g_f;
	int g;
	data()
	{
		gp = -1; g_mid = -1; g_f = -1; g = 0;
	}
};
bool cmp(data a, data b)
{
	if(a.g!=b.g) return a.g > b.g;
	else return a.name < b.name;
}
int main()
{
	int p, m, n;
	string s;
	int k;
	map<string,data> v;
	vector<data> vm;
	scanf("%d %d %d", &p, &m, &n);
	for(int i=0; i<p; i++)
	{
		cin >> s >> k;
		if(k<200||k>900) continue;
		v[s].name = s;
		v[s].gp = k;
	}
	for(int i=0; i<m; i++)
	{
		cin >> s >> k;
		if(v[s].gp<200||v[s].gp>900||k>100||k<0) continue;
		v[s].g_mid = k;
	}
	for(int i=0; i<n; i++)
	{
		cin >> s >> k;
		if(v[s].gp<200||v[s].gp>900||k>100||k<0) continue;
		v[s].g_f = k;
	}
	map<string,data>::iterator mp;
	for(mp=v.begin(); mp!=v.end(); mp++)
	{
		if(v[mp->first].g_mid>v[mp->first].g_f)
		{
			v[mp->first].g = (int)(v[mp->first].g_mid*0.4+v[mp->first].g_f*0.6 + 0.5);
		}
		else v[mp->first].g = v[mp->first].g_f;
		vm.push_back(v[mp->first]);
	}
	sort(vm.begin(),vm.end(),cmp);
	for(int i=0; i<vm.size(); i++)
	{
		if((vm[i].g_mid==-1&&vm[i].g_f==-1)||vm[i].g<60) continue;
		cout << vm[i].name;
		printf(" %d %d %d %d\n", vm[i].gp, vm[i].g_mid, vm[i].g_f, vm[i].g);
	}
	return 0;
}

