#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
	int h;
	int m;
	int s;
	int wait;
	int process;
	double total;
};

struct record{
	double endTime; 
	record(){endTime = 28800.0;}
};

bool cmp(node a,node b)
{
	return a.total < b.total;
}
bool cmp2(record a,record b)
{
	return a.endTime < b.endTime;
}

int main()
{
	int cousNum;
	int winNum;
	cin >> cousNum >> winNum;
	int i;
	node t;
	vector<node> vec;
	for(i=0; i<cousNum; i++){
		scanf("%d:%d:%d %d",&t.h,&t.m,&t.s,&t.process);
		t.total = t.h*3600 + t.m*60 + t.s;
		vec.push_back(t);
	}
	sort(vec.begin(),vec.end(),cmp);
	vector<record> rec(winNum);

	int winBusy = 0;
	int j;
	double sum = 0.0;
	int count = 0;
	for(i=0; i<cousNum; i++)
	{
		if(vec[i].total > 17*3600 ) 
		{
			count++;
			continue;
		}
		sort(rec.begin(),rec.end(),cmp2);
		vec[i].wait =rec[0].endTime - vec[i].total;
		if(vec[i].wait <= 0)
			vec[i].wait = 0;
		rec[0].endTime  += vec[i].process*60;
		sum += vec[i].wait;
	}
	printf("%.1lf\n",sum/(cousNum-count)/60.0);
	return 0;
}
