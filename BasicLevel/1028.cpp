#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
	string name;
	int y, m, d;
};
bool cmp(data a, data b)
{
	if(a.y!=b.y) return a.y < b.y;
	else
	{
		if(a.m!=b.m) return a.m < b.m;
		else return a.d < b.d;
	}
}
int main()
{
	int n;
	string s;
	vector<data> v;
	scanf("%d", &n);
	for(int i=0; i<n; i++)//排除不符合的选项 
	{
		data a;
		cin >> a.name;
		scanf("%d/%d/%d", &a.y, &a.m, &a.d);
		if((a.y>1814)||(a.y==1814&&a.m>9)||(a.y==1814&&a.m==9&&a.d>=6))
		{
			if((a.y<2014)||(a.y==2014&&a.m<9)||(a.y==2014&&a.m==9&&a.d<=6))
			{
				v.push_back(a);
			}
		}
	}
	if(v.size()==0)
	{
		printf("0");
		return 0;
	}
	printf("%d ", v.size());
	sort(v.begin(),v.end(),cmp);
	cout << v[0].name << " " << v[v.size()-1].name << endl;
	return 0;
}
