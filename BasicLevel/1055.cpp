#include<iostream>
#include<algorithm>
using namespace std;
int n, k;
struct data{
	string name;
	int height;
};
data a[10005];
bool cmp(data a, data b)
{
	if(a.height!=b.height) return a.height < b.height;
	else return a.name > b.name;
}
void print(int begin, int end)
{
	int left=0, right=0;
	bool right_ = false;
	int mid = (end-begin)/2+1;
	data t[end-begin+2];
	t[mid] = a[end];
	for(int i=end-1; i>=begin; i--)
	{
		if(right_)
		{
			right++;
			t[mid+right] = a[i];
			right_ = false;
		}
		else
		{
			left--;
			t[mid+left] = a[i];
			right_ = true;
		}
	}
	for(int i=mid+left; i<=mid+right; i++)
	{
		if(i!=mid+left) printf(" ");
		cout << t[i].name;
	}
	printf("\n");
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++) cin >> a[i].name >> a[i].height;
	sort(a+1,a+n+1,cmp);
	
	int last = ((k-1)*n/k)+1;
	print(last,n);
	
	for(int i=last-n/k; i>=1; i-=n/k) print(i,i+n/k-1);
	return 0;
}
