#include<iostream>
#include<cstdio>
using namespace std;
typedef struct tree *AVL;
struct tree{
	int date;
	int height;
	AVL l;
	AVL r;
};
AVL R(AVL AT);
AVL L(AVL AT);
AVL RL(AVL AT);
AVL LR(AVL AT);
AVL Insert(AVL AT, int d);
int Height(AVL AT)
{
	if(AT==NULL) return -1;
	else return AT->height;
}
int Max(int a, int b) { return a > b ? a : b; }
int main()
{
	AVL AT;
	AT = NULL;
	int n, k;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		AT = Insert(AT,k);
	}
	printf("%d\n", AT->date);
	return 0;
}

AVL R(AVL AT)
{
	AVL L = AT->l;
	AT->l = L->r;
	L->r = AT;
	AT->height = Max(Height(AT->l),Height(AT->r))+1;
	L->height = Max(Height(L->l),Height(L->r))+1;
	return L;
}
AVL L(AVL AT)
{
	AVL R = AT->r;
	AT->r = R->l;
	R->l = AT;
	AT->height = Max(Height(AT->l),Height(AT->r))+1;
	R->height = Max(Height(R->l),Height(R->r))+1;
	return R;
}
AVL RL(AVL AT)
{
	AT->r = R(AT->r);
	return L(AT);
}
AVL LR(AVL AT)
{
	AT->l = L(AT->l);
	return R(AT);
}
AVL Insert(AVL AT, int d)
{
	if(AT == NULL)
	{
		AT = new tree;
		AT->l = NULL;
		AT->r = NULL;
		AT->height = 0;
		AT->date = d;
	}
	else if(d < AT->date)
	{
		AT->l = Insert(AT->l,d);
		if(Height(AT->l)-Height(AT->r)==2)
		{
			if(d < AT->l->date) AT = R(AT);
			else AT = LR(AT);
		}
	}
	else if(d > AT->date)
	{
		AT->r = Insert(AT->r,d);
		if(Height(AT->r)-Height(AT->l)==2)
		{
			if(d > AT->r->date) AT = L(AT);
			else AT = RL(AT);
		}
	}
	AT->height = Max(Height(AT->l),Height(AT->r))+1;
	return AT;
}

