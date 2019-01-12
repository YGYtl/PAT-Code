#include<iostream>
#include<algorithm>
using namespace std;
struct data{
	int s;
	int score;
	data() {score = 0;}
};
bool cmp(data a, data b)
{
	return a.score > b.score;
}
int main()
{
	int n, s, score;
	scanf("%d", &n);
	data a[n+1];
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", &s, &score);
		a[s].s = s;
		a[s].score += score;
	}
	sort(a+1,a+n+1,cmp);
	printf("%d %d\n", a[1].s, a[1].score);
	return 0;
}
