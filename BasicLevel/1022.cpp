#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, sum = 0;
	int d, g = 0;
	vector<int> v;
	scanf("%d %d %d", &a, &b, &d);
	sum = a + b;
	if(sum==0) printf("0");
	while(sum)
	{
		v.push_back(sum%d);
		sum /= d;
	}
	reverse(v.begin(),v.end());
	for(int i=0; i<v.size(); i++) printf("%d", v[i]);
	return 0;
}
