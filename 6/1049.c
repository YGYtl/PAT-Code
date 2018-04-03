#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int i;
  double a[100001] = {0};
  double sum=0.0;
  for(i=1; i<=n; i++)
  {
    scanf("%lf", &a[i]);
    sum = sum + a[i]*i*(n-i+1);
  }
 printf("%.2f", sum);
  return 0;
}
