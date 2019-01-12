#include<cstdio>
#include<iostream>
using namespace std;
struct node{
    string data;
    int left;
    int right;
}a[25];
int visit[25], n, root;
void inorder(int k){
    if(k==-1) return;
    if(a[k].right!=-1&&k!=root) printf("(");
    inorder(a[k].left);
    cout << a[k].data;
    inorder(a[k].right);
    if(a[k].right!=-1&&k!=root) printf(")");
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
        cin >> a[i].data >> a[i].left >> a[i].right;
        if(a[i].left != -1) visit[a[i].left] = 1;
        if(a[i].right != -1) visit[a[i].right] = 1;
    }
    for(int i=1; i<=n; i++)
	{
        if(!visit[i]) root = i;
    }
    inorder(root);
    printf("\n");
    return 0;
}

