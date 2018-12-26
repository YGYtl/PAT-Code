#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<cstdlib> 
using namespace std;
vector<int> v;
typedef struct node * T;
struct node
{
	int num;
	T left;
	T right;
};
bool flag = true;
bool gt(const int &a,const int &b)
{
	return a >= b;
}
bool lt(const int &a,const int &b)
{
	return a < b;
}
T create(int l, int r, bool cmp(const int&,const int&))
{
	if(!flag) return NULL;
	if(l>r) return NULL;
	T root = new node();
	root->num = v[l];
	if(l==r) return root;
	int mid;
	for(mid = l+1; mid<=r; mid++)
	{
		if(!cmp(v[mid],v[l])) break;
	}
	root->left = create(l+1,mid-1,cmp);
	for(int j=mid; j<=r; j++)
	{
		if(cmp(v[j],v[l]))
		{
			flag = false;
			return NULL;
		}
	}
	root->right = create(mid,r,cmp);
	return root;
}
bool f = true;
void post(T root)
{
	if(root)
	{
		post(root->left);
		post(root->right);
		if(f)
		{
			cout << root->num;
			f = false;
		}
		else cout << " " << root->num;
	}
}
int main()
{
	int n;
	cin >> n;
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	if(n==1)
	{
		cout << "YES" << endl;
		cout << v[0] << endl;
		return 0;
	}
	T root = create(0,n-1,lt);
	if(flag)
	{
		cout << "YES" << endl;
		post(root);
	}
	else{
		flag = true;
		root = create(0,n-1,gt);
		if(flag)
		{
			cout << "YES" << endl;
			post(root);
		}
		else cout << "NO" << endl;
	}
	return 0;
}
