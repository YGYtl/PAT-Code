#include<stdio.h>
int main()
{
  int n, i, c, d;
  int max=0, m;
  int a[100001] = {0};
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    scanf("%d %d", &c, &d);
    a[c] += d;
    if(a[c]>=max)
    {
      max = a[c];
      m = c;
    }
  }
  printf("%d %d", m, max);
    return 0;
}