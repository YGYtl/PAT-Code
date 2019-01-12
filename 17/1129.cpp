#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct data{
	int num;
	int c;
	data() {c=0;}
};
bool cmp(data a, data b) {
	if(a.c != b.c) return a.c > b.c;
	else{
		return a.num < b.num;
	}
}
int main()
{
	int n, k, num, o = 0;
	scanf("%d %d", &n, &k);
	scanf("%d", &num);
	data m; 
	m.num = num;
	m.c++;
	vector<data> v;
	v.push_back(m);
	for(int i=0; i<n-1; i++)
	{
		o = 0;
		scanf("%d", &num);
		printf("%d:", num);
		sort(v.begin(),v.end(),cmp);
		for(int j=0; j<k&j<v.size(); j++) printf(" %d", v[j].num);
		printf("\n");
		for(int j=0; j<v.size(); j++)
		{
			if(v[j].num==num)
			{
				v[j].c++;
				o = 1;
				break;
			}
		}
		if(o==0)
		{
			data m;
			m.num = num;
			m.c++;
			v.push_back(m);
		}
	}
	return 0;
}
