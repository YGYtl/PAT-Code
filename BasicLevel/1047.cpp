#include<iostream>
#include<map>
#include<set>
using namespace std;
struct data{
	int n;
	int s;
	data(){
		s = 0;
	}
};
int main()
{
	int nn, l, m, n;
	int c = -1, f = 0;
	map<int,data> v;
	set<int> s;
	int a[1004]={'\0'};
	scanf("%d", &nn);
	for(int i=0; i<nn; i++)
	{
		scanf("%d-%d %d", &l, &m, &n);
		v[l].n = l;
		v[l].s += n;
	}
	map<int,data>::iterator vm;
	for(vm=v.begin(); vm!=v.end(); vm++)
	{
		if(v[vm->first].s>c)
		{
			c = v[vm->first].s;
			f = vm->first;
		}
	}
	printf("%d %d\n", f, c);
	return 0;
}
