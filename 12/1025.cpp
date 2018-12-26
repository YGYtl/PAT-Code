#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct date{
	string name;
	int score;
	int number_list;
	int test_list;
	int score_list;
};
bool cmp1(date a, date b)
{
	if(a.score != b.score) return a.score > b.score;
	else return a.name < b.name;
}
int main()
{
	date s[300005];
	int n, k, c = 0, flag = 0, c1, c2, c3;
	string str;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		for(int j=0; j<k; j++)
		{
			cin >> s[c].name;
			scanf("%d", &s[c].score);
			s[c].test_list = i+1;
			c++;
		}
		sort(s+c-k,s+c,cmp1);
		c1 = 1, c2 = 0, c3 = 1;
		for(int p=c-k; p<c; p++)
		{
			if(p == c-k) flag = s[p].score;
			if(s[p].score!=flag)
			{
				flag = s[p].score;
				c1 += c2;
				c2 = 1;
			}
			else c2++;
			s[p].score_list = c1;
		}
	}
	sort(s,s+c,cmp1);
	c1 = 1, c2 = 0, c3 = 1;
	for(int i=0; i<c; i++)
	{
		if(i == 0) flag = s[i].score;
		if(s[i].score!=flag)
		{
			flag = s[i].score;
			c1 += c2;
			c2 = 1;
		}
		else c2++;
		s[i].number_list = c1;
	}
	printf("%d\n", c);
	for(int i=0; i<c; i++)
	{
		cout << s[i].name;
		printf(" %d %d %d\n", s[i].number_list, s[i].test_list, s[i].score_list);
	}
	return 0;
}
