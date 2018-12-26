#include<iostream>
#include<cstdio>
using namespace std;
struct date{
	string name, xo, xn;
	int num;
};

int main()
{
	date d, mf, mm;
	int n;
	scanf("%d", &n);
	mf.num = -1; mm.num = -1;
	for(int i=0; i<n; i++)
	{
		cin >> d.name >> d.xo >> d.xn >> d.num;
		if(mf.num == -1 && d.xo == "F") mf = d;
		if(mm.num == -1 && d.xo == "M") mm = d;
		if(d.xo == "F" && d.num > mf.num) mf = d;
		if(d.xo == "M" && d.num < mm.num) mm = d;
	}
	if(mf.num == -1) printf("Absent\n");
	else cout << mf.name << " " << mf.xn << endl;
	if(mm.num == -1) printf("Absent\n");
	else cout << mm.name << " " << mm.xn << endl;
	if(mf.num == -1 || mm.num == -1) cout << "NA" << endl;
	else printf("%d\n", mf.num - mm.num);
	return 0;
}
