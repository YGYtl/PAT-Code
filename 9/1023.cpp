#include<cstdio>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<char> v;
	vector<int> vt;
	map<int,int> m;
	char c;
	int sum = 0, k, c1=0, c2=0, l=0;
	scanf("%c", &c);
	while(c!='\n')
	{
		v.push_back(c);
		m[c-'0']++;
		scanf("%c", &c);
	}
	vector<char>::reverse_iterator v1;
	for(v1=v.rbegin(); v1!=v.rend(); v1++)
	{
		k = (*v1-'0')*2;
		sum = sum + k;
		vt.push_back(sum%10);
		if(l==0&&m[sum%10]==0)
		{
			printf("No\n");
			l = 1;
		}
		else{
			m[sum%10]--;
		}
		sum /= 10;
	}
	if(sum!=0) vt.push_back(sum%10);
	if(l==0) printf("Yes\n");
	vector<int>::reverse_iterator v2;
	for(v2=vt.rbegin(); v2!=vt.rend(); v2++)
		printf("%d", *v2);
	return 0;
}