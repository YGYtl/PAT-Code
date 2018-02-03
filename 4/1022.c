#include<stdio.h>
int main()
{
  int a, b, c;
  int sum, j[10000] = {'\0'}, k, i;
  scanf("%d %d %d", &a, &b, &c);
  sum = a+b;
  j[0] = sum%c;
  sum = sum/c;
  for(i=1; sum!=0; i++)
  {
    j[i] = sum%c;
    sum = sum/c;
  }
  k = i-1;
  for(i=k; i>-1; i--)
  {
    printf("%d", j[i]);
  }
  return 0;
}