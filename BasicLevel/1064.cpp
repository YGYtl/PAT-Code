#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n, k;
	set<int> s;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		int sum = 0;
		while(k)
		{
			sum += k%10;
			k /= 10;
		}
		s.insert(sum);
	}
	printf("%d\n", s.size());
	k = 0;
	set<int>::iterator v;
	for(v=s.begin(); v!=s.end(); v++)
	{
		if(k==1) printf(" ");
		printf("%d", *v);
		k = 1;
	}
	return 0;
}
