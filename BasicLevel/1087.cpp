#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n, sum;
	set<int> s;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		sum = i/2+i/3+i/5;
		s.insert(sum);
	}
	printf("%d\n", s.size());
	return 0;
}
