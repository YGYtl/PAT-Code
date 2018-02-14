#include<stdio.h>
#include<math.h>
int f(int b);
int main()
{
  int n, k, j;
  scanf("%d", &n);
  int i, a[10000]={'\0'}, tem;
  for(i=1; i<=n; i++)
  {
    scanf("%d", &tem);
    a[tem] = i;
  }
  scanf("%d", &k);
  for(i=0; i<k; i++)
  {
    scanf("%d", &tem);
    if(a[tem]==0)
    {
      printf("%04d: Are you kidding?\n", tem);
    }
    else if(a[tem]==-1)
    {
      printf("%04d: Checked\n", tem);
    }
    else if(a[tem]==1)
    {
      printf("%04d: Mystery Award\n", tem);
      a[tem] = -1;
    }
    else if(f(a[tem]))
    {
      printf("%04d: Minion\n",tem);
      a[tem] = -1;
    }
    else{
      printf("%04d: Chocolate\n",tem);
            a[tem]=-1;
    }
  }
  return 0;
}
int f(int b)
{
  int i;
  for(i=2; i<b/2; i++)
  {
    if(b%i==0) return 0;
  }
  return 1;
}