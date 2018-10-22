#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
struct data{
	string school;
	double sum;
	int c;
	data()
	{
		sum = 0; c = 0;
	}
};
bool cmp(data a, data b)
{
	if((int)a.sum!=(int)b.sum) return (int)a.sum > (int)b.sum;
	else
	{
		if(a.c!=b.c) return a.c < b.c;
		else return a.school < b.school;
	}
}
int main()
{
	string s1, s2;
	int n, k;
	vector<data> vm;
	map<string,data> m;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> s1 >> k >> s2;
		transform(s2.begin(),s2.end(),s2.begin(),::tolower);
		m[s2].school = s2;
		if(s1[0]=='B')
		{
			m[s2].sum += k/1.5;
		}
		else if(s1[0]=='A')
		{
			m[s2].sum += k;
		}
		else{
			m[s2].sum += k*1.5;
		}
		m[s2].c++;
	}
	map<string,data>::iterator v;
	for(v=m.begin(); v!=m.end(); v++) vm.push_back(v->second);
	sort(vm.begin(),vm.end(),cmp);
	int c=0, o;
	printf("%d\n", vm.size());
	for(int i=0; i<vm.size(); i++)
	{
		if(i==0)
		{
			o = (int)vm[i].sum;
			c = 0;
		}
		else
		{
			if(o!=(int)vm[i].sum)
			{
				c = 0;
				o = (int)vm[i].sum;
			}
			else c++;
		}
		printf("%d ", i+1-c);
		cout << vm[i].school << " ";
		printf("%d %d\n", (int)vm[i].sum, vm[i].c);
	}
	return 0;
}
